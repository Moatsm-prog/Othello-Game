#include "../headers/mainwindow.h"
#include "../headers/macros.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
#include <QMessageBox>
#include <QDebug>
#include <QHBoxLayout>
#include "headers/game_page_animation_handler.h"
#include "headers/ui_game_handler.h"

// #define DEBUGARRPAIRS(A,n) { qDebug() << #A << " = \n"; FORN(_,n) qDebug() << A[_].first << ' ' << A[_].second << '\n'; }

void debug_board();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // this->set_up_ost();
    this->setWindowTitle("The Othello");
    ui->board_table_widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->stackedWidget->setCurrentWidget(ui->main_menu_page);
    game_logic = new GameLogic();
    menu_animation_handler = new MenuAnimationHandler(this);
    ui_game_handler = new UiGameHandler(this);
}

MainWindow::~MainWindow()
{
    delete this->ui;
    delete game_logic;
    delete this->menu_animation_handler;
    delete this->ui_game_handler;
    // delete this->media_player;
    // delete this->playlist;
}

void MainWindow::set_up_ost()
{
    /*playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/sounds/sound_tracks/ost.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    media_player = new QMediaPlayer();
    media_player->setPlaylist(playlist);
    media_player->setVolume(100);
    media_player->play();*/
}

void MainWindow::prompt_for_quit()
{
    int reply =
        QMessageBox::question(this, "Quit", "Are you sure you want to quit? :( ", QMessageBox::Yes, QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else if (reply == QMessageBox::No)
    {
        return;
    }
}
bool MainWindow::make_ai_move(int diff) {
    auto ab = AlphaBeta(*game_logic);
    auto move = ab.alphaBetaSearch(this->turn, diff);
    if(move.first == -2 && move.second == -2){
        return false;           
    }
    game_logic->update(this->turn, move.first, move.second);
    drawPlayerPosition();
    updateScore();
    return true;
}

void MainWindow::on_side_menu_toggle_clicked()
{
    this->menu_animation_handler->trigger_animation();
}

void MainWindow::on_board_table_widget_cellClicked(int row, int column)
{
    QWidget *cell_widget = ui->board_table_widget->cellWidget(row, column);
    if (cell_widget && cell_widget->cursor() == Qt::PointingHandCursor) // cursor on available move
    {
        ui->board_table_widget->removeCellWidget(row, column);
        game_logic->update(this->turn, row, column);
        drawPlayerPosition();
        this->turn = !this->turn;
        ui_game_handler->set_turn_label(this->turn);
        if(game_mode == HumanvsComputer) {
            bool ai_has_play = true;
            while(ai_has_play = make_ai_move(white_game_difficulty)) {
                this->turn = !this->turn; // turn for human
                if(drawAvailableMoves()) {
                    break;
                }
                this->turn = !this->turn; // turn for ai again
            }
            if(!ai_has_play){
                this->turn = !this->turn; // turn for human
            }
        } else { // HumanvsHuman
            bool hasAvailableMoves = drawAvailableMoves();
            if (!hasAvailableMoves)
            {
                this->turn = !this->turn;
                ui_game_handler->set_turn_label(this->turn);
                drawAvailableMoves();
            }
        }
        updateScore();
        if (game_logic->isGameOver())
        {
            QMessageBox msgBox;
            msgBox.setText("Game Over");
            msgBox.setInformativeText("Do you want to quit ?");
            msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            msgBox.setDefaultButton(QMessageBox::Yes);
            int ret = msgBox.exec();
            if (ret == QMessageBox::Yes)
            {
                QApplication::quit();
            }
        }
    }
}

void MainWindow::on_main_menu_start_btn_clicked()
{
    ui_game_handler->reset_game();
    ui->stackedWidget->setCurrentWidget(ui->game_page);
}

void MainWindow::on_main_menu_options_btn_clicked()
{
    // TODO: add the options widget, then remove this comment;
    ui->stackedWidget->setCurrentWidget(ui->options_page);
}

void MainWindow::on_main_menu_quit_btn_clicked()
{
    prompt_for_quit();
}

void MainWindow::on_side_menu_quit_btn_clicked()
{
    prompt_for_quit();
}

void MainWindow::on_side_menu_restart_btn_clicked()
{
    int reply =
        QMessageBox::question(this, "Restart", "Are you sure you want to restart?", QMessageBox::Yes, QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        ui_game_handler->reset_game();
    }
    else if (reply == QMessageBox::No)
    {
        return;
    }
}

void MainWindow::on_side_menu_back_btn_clicked()
{
    int reply =
        QMessageBox::question(this, "Back", "Are you sure you want to go back to Main Menu?\n all progress will be lost.", QMessageBox::Yes, QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        ui->stackedWidget->setCurrentWidget(ui->main_menu_page);
    }
    else if (reply == QMessageBox::No)
    {
        return;
    }
}

void MainWindow::on_optionButton_clicked()
{
//    /*Game Options*/
   if(ui->ai_ai_option->isChecked())
   {
       this->game_mode = GameMode::ComputervsComputer;
   }
   else if(ui->human_ai_option->isChecked())
   {
       this->game_mode = GameMode::HumanvsComputer;
   }
   else if(ui->human_human_option->isChecked())
   {
       this->game_mode = GameMode::HumanvsHuman;
   }
   /*Game Difficult Code*/
    if(ui->easy_option->isChecked())
    {
        this->white_game_difficulty = White_Easy;
    }
    else if(ui->medium_option->isChecked())
    {
        this->white_game_difficulty = White_Medium;
    }
    else if(ui->hard_option->isChecked())
    {
        this->white_game_difficulty = White_Diffuclut;
    }

    if(ui->easy_option_2->isChecked())
    {
        this->black_game_difficulty = Black_Easy;
    }
    else if(ui->medium_option_2->isChecked())
    {
        this->black_game_difficulty = Black_Medium;
    }
    else if(ui->hard_option_2->isChecked())
    {
        this->black_game_difficulty = Black_Diffuclut;
    }
}

void MainWindow::on_back_options_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->main_menu_page);
}

void MainWindow::drawPlayerPosition()
{
    ui_game_handler->clear_table();
    std::vector<std::pair<int, int>> black_moves = game_logic->getPlayerPositions(BLACK);
    std::vector<std::pair<int, int>> white_moves = game_logic->getPlayerPositions(WHITE);
    for (std::pair<int, int> move : black_moves)
    {
        ui_game_handler->draw(BLACK, move.first, move.second);
    }

    for (std::pair<int, int> move : white_moves)
    {
        ui_game_handler->draw(WHITE, move.first, move.second);
    }
}

bool MainWindow::drawAvailableMoves()
{
    if(game_mode == ComputervsComputer) {
        auto ab = AlphaBeta(*game_logic);
        auto diff = (this->turn == 0) ? white_game_difficulty : black_game_difficulty;
        auto move = ab.alphaBetaSearch(this->turn, diff);
        if(move.first == -2 && move.second == -2){
            return false;
        } else {
            ui_game_handler->draw(INDICATOR, move.first, move.second);
            return true;
        }
    }
    bool hasAvailableMoves = false;
    std::vector<std::pair<int, int>> moves = game_logic->getAvailableMoves(this->turn);
    for (std::pair<int, int> move : moves)
    {
        ui_game_handler->draw(INDICATOR, move.first, move.second);
        hasAvailableMoves = true;
    }
    return hasAvailableMoves;
}

void MainWindow::updateScore()
{
    std::pair<int, int> score = game_logic->getScore();
    ui_game_handler->set_black_score(score.second);
    ui_game_handler->set_white_score(score.first);
}

void MainWindow::on_side_menu_sound_btn_clicked()
{
    /*QIcon icon = QIcon();
    if (this->media_player->isMuted())
        icon.addPixmap(QPixmap(":/icons48x48/icons/48x48/volume_off.png"), QIcon::Normal, QIcon::Off);
    else
        icon.addPixmap(QPixmap(":/icons48x48/icons/48x48/volumne_on.png"), QIcon::Normal, QIcon::Off);

    this->ui->side_menu_sound_btn->setIcon(icon);
    media_player->setMuted(!media_player->isMuted());*/
}

void MainWindow::debug_board()
{
    std::vector<std::pair<int, int>> available_moves_black = game_logic->getAvailableMoves(BLACK);
    std::vector<std::pair<int, int>> available_moves_white = game_logic->getAvailableMoves(WHITE);
    std::vector<std::pair<int, int>> player_positions_white = game_logic->getPlayerPositions(WHITE);
    std::vector<std::pair<int, int>> player_positions_black = game_logic->getPlayerPositions(BLACK);
    // DEBUGARRPAIRS(available_moves_black, available_moves_black.size());
    // DEBUGARRPAIRS(available_moves_white, available_moves_white.size());
    // DEBUGARRPAIRS(player_positions_black, player_positions_black.size());
    // DEBUGARRPAIRS(player_positions_white, player_positions_white.size());
}
