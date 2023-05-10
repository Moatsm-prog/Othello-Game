#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QPropertyAnimation>
#include<QParallelAnimationGroup>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;
    int turn;
    void trigger_animation();
    void set_animation(QPropertyAnimation *animation, int start_val, int end_val, int duration);
    void draw(int type, int x, int y);
    void reset_game();
    void draw_initial_pieces();
    void clear_table();
    void set_black_score(int score);
    void set_white_score(int score);
    void set_turn_label(int turn);
    void prompt_for_quit();

private:
    QPropertyAnimation *side_menu_animation;
    QPropertyAnimation *restart_btn_animation;
    QPropertyAnimation *back_btn_animation;
    QPropertyAnimation *quit_btn_animation;
    QParallelAnimationGroup *group;



private slots:
    void on_side_menu_toggle_clicked();
    void on_board_table_widget_cellClicked(int row, int column);
    void on_main_menu_start_btn_clicked();
    void on_main_menu_options_btn_clicked();
    void on_main_menu_quit_btn_clicked();
    void on_side_menu_quit_btn_clicked();
    void on_side_menu_restart_btn_clicked();
    void on_side_menu_back_btn_clicked();
};
#endif // MAINWINDOW_H
