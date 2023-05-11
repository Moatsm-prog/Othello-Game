#include "../headers/mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
#include <QMessageBox>
#include <QDebug>
#include <QHBoxLayout>
#define BLACK_PIECE "QWidget{ background-color: rgb(0, 0, 0); min-width:50; max-width:50; min-height:50; max-height:50; border-radius:25;}"
#define WHITE_PIECE "QWidget{ background-color: rgb(223, 223, 223); min-width:50; max-width:50; min-height:50; max-height:50; border-radius:25;}"
#define INIDICATOR_PIECE "QWidget{ background-color: rgb(97, 199, 187); min-width:20; max-width:20; min-height:20; max-height:20; border-radius:10;}"
#define BLACK 1
#define WHITE 0
#define INDICATOR -1

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->main_menu_page);
    game_logic = new GameLogic();
}

// destructor
MainWindow::~MainWindow()
{
    delete ui;
    delete side_menu_animation;
    delete restart_btn_animation;
    delete back_btn_animation;
    delete quit_btn_animation;
    delete game_logic;
    clear_table();
}

// SLOT
// breif: on_side_menu_toggle_clicked slot responsible for expanding/collapsing the side menu when the toggle button is clicked.
void MainWindow::on_side_menu_toggle_clicked()
{
    trigger_animation();
}

// SLOT
// breif: on_board_table_widget_cellClicked slot responsible for handling the user clicks on the board positions.
// only draws if the cell is one of the available moves, otherwide, neglect.
// input row: the row index of the clicked position.
// input col: the col index of the clicked position.
void MainWindow::on_board_table_widget_cellClicked(int row, int column)
{
    QWidget *cell_widget = ui->board_table_widget->cellWidget(row, column);
    if (cell_widget && cell_widget->cursor() == Qt::PointingHandCursor)
    {
        ui->board_table_widget->removeCellWidget(row, column);
        draw(this->turn, row, column);
        drawAvailableMoves();
        set_turn_label(!this->turn);
        updateScore();
        if(game_logic->isGameOver()) {
            QMessageBox msgBox;
            msgBox.setText("Game Over");
            msgBox.setInformativeText("Do you want to quit ?");
            msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            msgBox.setDefaultButton(QMessageBox::Yes);
            int ret = msgBox.exec();
            if(ret == QMessageBox::Yes) {
                QApplication::quit();
            }
        }
    }
}

// brief: trigger_animation method responsible for triggering the side menu animations.
// TODO: clean the code.
void MainWindow::trigger_animation()
{
    int min_val = 50;
    int max_val = 130;
    int side_menu_min_val = 72;
    int side_menu_max_val = 150;
    side_menu_animation = new QPropertyAnimation(ui->side_menu_frame, "minimumWidth");
    back_btn_animation = new QPropertyAnimation(ui->side_menu_back_btn, "minimumWidth");
    restart_btn_animation = new QPropertyAnimation(ui->side_menu_restart_btn, "minimumWidth");
    quit_btn_animation = new QPropertyAnimation(ui->side_menu_quit_btn, "minimumWidth");
    int cur_val = ui->side_menu_quit_btn->width();
    int side_menu_cur_val = ui->side_menu_frame->width();
    int duration = 150;
    int end_val;
    int side_menu_end_val;
    QIcon icon = QIcon();
    if (cur_val < max_val)
    {
        // expand
        end_val = max_val;
        side_menu_end_val = side_menu_max_val;
        ui->side_menu_back_btn->setText(" Main Menu");
        ui->side_menu_restart_btn->setText("  Restart   ");
        ui->side_menu_quit_btn->setText("  QUIT       ");
        icon.addPixmap(QPixmap(":/icons48x48/icons/48x48/minimize_ico.png"), QIcon::Normal, QIcon::Off);
    }
    else
    {
        end_val = min_val;
        side_menu_end_val = side_menu_min_val;
        ui->side_menu_back_btn->setText("");
        ui->side_menu_restart_btn->setText("");
        ui->side_menu_quit_btn->setText("");
        icon.addPixmap(QPixmap(":/icons48x48/icons/48x48/dots_ico.png"), QIcon::Normal, QIcon::Off);
    }
    ui->side_menu_toggle->setIcon(icon);
    set_animation(restart_btn_animation, cur_val, end_val, duration);
    set_animation(quit_btn_animation, cur_val, end_val, duration);
    set_animation(back_btn_animation, cur_val, end_val, duration);
    set_animation(side_menu_animation, side_menu_cur_val, side_menu_end_val, duration);
    group = new QParallelAnimationGroup;
    group->addAnimation(side_menu_animation);
    group->addAnimation(back_btn_animation);
    group->addAnimation(restart_btn_animation);
    group->addAnimation(quit_btn_animation);
    group->start();
}

// breif: set_animation method responsible for setting the animation paramters.
// input animation: pointer to the animation to set its paramters.
// input start_val: the start value of the animation.
// input end_val: the end value of the animation.
// input duration: the duration of the animation.
void MainWindow::set_animation(QPropertyAnimation *animation, int start_val, int end_val, int duration)
{
    animation->setDuration(duration);
    animation->setStartValue(start_val);
    animation->setEndValue(end_val);
};

// breif: draw method responsible for drawing one of three types of widgets in a certain table position.
// input x: the x/row co-ordinate of the widget.
// input y: the y/column co-ordinate of the widget.
// input turn: a flag that specefies the type of widget to be drawn - check the macros file for more information.
// for type parameter, pass 1/BLACK, 0/WHITE, -1/INDICATOR
void MainWindow::draw(int type, int x, int y)
{
    // if there is a widget in the position, remove it.
    QWidget *cell_widget = ui->board_table_widget->cellWidget(x, y);
    if (cell_widget)
        ui->board_table_widget->removeCellWidget(x, y);
    // create the new widget
    QWidget *container_widget = new QWidget();
    QWidget *piece_widget = new QWidget();
    QString piece;
    // apply the styling according to type of piece.
    if (type == BLACK)
    {
        piece = BLACK_PIECE;
        game_logic->update(type, x, y);
    }
    else if (type == WHITE)
    {
        piece = WHITE_PIECE;
        game_logic->update(type, x, y);
    }
    else if (type == INDICATOR)
    {
        piece = INIDICATOR_PIECE;
        container_widget->setCursor(QCursor(Qt::PointingHandCursor));
    }
    else
    {
        // qDebug()<<"Unsupported type";
    }
    piece_widget->setStyleSheet(piece);
    // set the widget inside the cell
    QHBoxLayout *layout = new QHBoxLayout(container_widget);
    layout->addWidget(piece_widget);
    layout->setAlignment(Qt::AlignCenter);
    layout->setContentsMargins(0, 0, 0, 0);
    container_widget->setLayout(layout);
    ui->board_table_widget->setCellWidget(x, y, container_widget);
}

// breif: reset_game method respoinsible for cleaning the board, setting the initial 4 pieces, and resetting
// both the scores and turn labels to their initial values
void MainWindow::reset_game()
{
    clear_table();
    draw_initial_pieces();
    set_black_score(0);
    set_white_score(0);
    set_turn_label(BLACK);
    this->turn = BLACK;
}

// breif: clear_table method respoinsible for cleaning the board table widget
void MainWindow::clear_table()
{
    for (int i = 0; i < ui->board_table_widget->rowCount(); ++i)
        for (int j = 0; j < ui->board_table_widget->columnCount(); ++j)
        {
            QWidget *cell_widget = ui->board_table_widget->cellWidget(i, j);
            if (cell_widget)
                ui->board_table_widget->removeCellWidget(i, j);
        }
}

// breif: draw_initial_pieces method respoinsible for drawing the initial 4 pieces.
void MainWindow::draw_initial_pieces()
{
    draw(BLACK, 3, 4);
    draw(BLACK, 4, 3);
    draw(WHITE, 3, 3);
    draw(WHITE, 4, 4);
    drawAvailableMoves();
}

// breif: set_black_score method responsible for setting the black player score on the UI.
// input score: the score to set.
void MainWindow::set_black_score(int score)
{
    ui->black_score_label->setText(QString::number(score));
}

// breif: set_white_score method responsible for setting the white player score on the UI.
// input score: the score to set.
void MainWindow::set_white_score(int score)
{
    ui->white_score_label->setText(QString::number(score));
}

// breif: set_turn_label method responsible for setting player's turn on the UI.
// input turn: a flag that specefies the player in turn - check the macros file for more information
// either pass 1/BLACK or 0/WHITE
void MainWindow::set_turn_label(int turn)
{
    if (turn == BLACK)
        ui->turn_label->setText("Black");
    else if (turn == WHITE)
        ui->turn_label->setText("White");
    else
    {
        // qDebug()<<"type not supproted, pass either 1 for black or 0 for white.";
    }
    this->turn = !this->turn;
}

// The following methods are realted to menu buttons behaviour
void MainWindow::on_main_menu_start_btn_clicked()
{
    reset_game();
    ui->stackedWidget->setCurrentWidget(ui->game_page);
    // draw(INDICATOR, 0, 2);
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
        reset_game();
    }
    else if (reply == QMessageBox::No)
    {
        return;
    }
}

void MainWindow::on_side_menu_back_btn_clicked()
{
    int reply =
        QMessageBox::question(this, "Back", "Are you sure you want to go back to Main Menu?\n all progress would be lost.", QMessageBox::Yes, QMessageBox::No);
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
    GameMode game_mode = GameMode::ComputervsComputer;
    GameDifficulty game_difficulty = GameDifficulty::Esay;

    /*Game Options*/
    if(ui->ai_ai_option->isChecked())
    {
        game_mode = GameMode::ComputervsComputer;
    }
    else if(ui->human_ai_option->isChecked())
    {
        game_mode = GameMode::HumanvsComputer;
    }
    else if(ui->human_human_option->isChecked())
    {
        game_mode = GameMode::HumanvsHuman;
    }
    /*Game Difficult Code*/
    if(ui->easy_option->isChecked())
    {
        game_difficulty = GameDifficulty::Esay;
    }
    else if(ui->medium_option->isChecked())
    {
        game_difficulty = GameDifficulty::Medium;
    }
    else if(ui->hard_option->isChecked())
    {
        game_difficulty = GameDifficulty::Diffuclut;
    }

    game_logic->setGameDifficultyLevel(game_difficulty);
    game_logic->setGameMode(game_mode);
}


void MainWindow::drawPlayerPosition() {
    clear_table();
    std::vector<std::pair<int, int>> black_moves = game_logic->getPlayerPositions(BLACK);
    std::vector<std::pair<int, int>> white_moves = game_logic->getPlayerPositions(WHITE);
    for(std::pair<int, int> move : black_moves) {
        draw(BLACK, move.first, move.second);
    }

    for(std::pair<int, int> move : white_moves) {
        draw(WHITE, move.first, move.second);
    }
}


void MainWindow::drawAvailableMoves() {
    std::vector<std::pair<int, int>> moves = game_logic->getAvailableMoves(this->turn);
    for(std::pair<int, int> move : moves) {
        draw(INDICATOR, move.first, move.second);
    }
}

void MainWindow::updateScore() {
    std::pair<int, int> score = game_logic->getScore();
    set_black_score(score.second);
    set_white_score(score.first);
}
