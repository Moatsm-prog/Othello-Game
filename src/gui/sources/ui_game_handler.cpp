#include "./headers/mainwindow.h"
#include "./headers/ui_game_handler.h"
#include "qdebug.h"
#include "ui_mainwindow.h"
#include "./headers/macros.h"

UiGameHandler::UiGameHandler(MainWindow *main_window)
{
    this->main_window = main_window;
}

void UiGameHandler::draw(int type, int x, int y)
{
    // if there is a widget in the position, remove it.
    QWidget *cell_widget = main_window->ui->board_table_widget->cellWidget(x, y);
    if (cell_widget)
        main_window->ui->board_table_widget->removeCellWidget(x, y);
    // create the new widget representing the piece to be added
    QWidget *container_widget = new QWidget();
    QWidget *piece_widget = new QWidget();
    QString piece;
    // apply the styling according to type of piece.
    if (type == BLACK)
    {
        piece = BLACK_PIECE;
        main_window->game_logic->update(type, x, y);
    }
    else if (type == WHITE)
    {
        piece = WHITE_PIECE;
        main_window->game_logic->update(type, x, y);
    }
    else if (type == INDICATOR)
    {
        piece = INIDICATOR_PIECE;
        container_widget->setCursor(QCursor(Qt::PointingHandCursor));
    }
    else
    {
        qDebug() << "Unsupported type";
    }
    piece_widget->setStyleSheet(piece);
    // set the widget inside the cell
    QHBoxLayout *layout = new QHBoxLayout(container_widget);
    layout->addWidget(piece_widget);
    layout->setAlignment(Qt::AlignCenter);
    layout->setContentsMargins(0, 0, 0, 0);
    container_widget->setLayout(layout);
    main_window->ui->board_table_widget->setCellWidget(x, y, container_widget);
}

void UiGameHandler::draw_initial_pieces()
{
    draw(BLACK, 3, 4);
    draw(WHITE, 3, 3);
    draw(BLACK, 4, 3);
    draw(WHITE, 4, 4);
    this->main_window->drawAvailableMoves();
}

void UiGameHandler::clear_table()
{
    for (int i = 0; i < main_window->ui->board_table_widget->rowCount(); ++i)
        for (int j = 0; j < main_window->ui->board_table_widget->columnCount(); ++j)
        {
            QWidget *cell_widget = main_window->ui->board_table_widget->cellWidget(i, j);
            if (cell_widget)
                main_window->ui->board_table_widget->removeCellWidget(i, j);
        }
}

void UiGameHandler::reset_game()
{
    main_window->turn = BLACK;
    clear_table();
    draw_initial_pieces();
    set_black_score(2);
    set_white_score(2);
    set_turn_label(BLACK);
    main_window->turn = BLACK;
}

void UiGameHandler::set_black_score(int score)
{
    main_window->ui->black_score_label->setText(QString::number(score));
}

void UiGameHandler::set_white_score(int score)
{
    main_window->ui->white_score_label->setText(QString::number(score));
}

void UiGameHandler::set_turn_label(int turn)
{
    if (turn == BLACK)
        main_window->ui->turn_label->setText("Black");
    else if (turn == WHITE)
        main_window->ui->turn_label->setText("White");
    else
    {
        qDebug() << "type not supproted, pass either 1 for black or 0 for white.";
    }
    main_window->turn = !main_window->turn;
}
