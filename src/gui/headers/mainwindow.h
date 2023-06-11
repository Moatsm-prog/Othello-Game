#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QPropertyAnimation>
#include<QParallelAnimationGroup>
#include "gamelogic.h"
#include "AlphaBeta.h"
#include <QMainWindow>


//forward declaration of class MenuAnimationHandler
class MenuAnimationHandler;
//forward declaration of class MenuAnimationHandler
class UiGameHandler;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //brief: constructor of the class responsible for setting the main window components,
    //setting the application ui, and setting the main menu as the start window of the application
    //input parent: pointer to the parent widget used to display the main window.
    MainWindow(QWidget *parent = nullptr);

    //bried: destructor of the class resposible for deleting the class components, media player, and playlist.
    ~MainWindow();

    bool drawAvailableMoves();

    Ui::MainWindow *ui;

    GameLogic* game_logic;

    //turn variable is used to represent the player who should play in the current turn
    //0 if white and 1 for black
    int turn;

    void updateScore();

private:
    //pointer to the menu animation handler responsible for handling the side menu animation of the main window
    MenuAnimationHandler *menu_animation_handler;

    //pointer to the ui game handler responsible for handling changes that occur to the ui due to game changes
    UiGameHandler *ui_game_handler;

    //pointer to the playlist containing the OST of the game
    // QMediaPlaylist *playlist;

    //pointer to the game media player responsible for playing its sound effects
    // QMediaPlayer *media_player;

    //brief: setting up the game media player and playing the OST in the background
    void set_up_ost();

    void drawPlayerPosition();

    //breif: prompt_for_quit method responsible for asking the user to quit and handling his response.
    void prompt_for_quit();

private slots:
    // breif: on_side_menu_toggle_clicked slot responsible for expanding/collapsing the side menu when the toggle button is clicked.
    void on_side_menu_toggle_clicked();

    // breif: on_board_table_widget_cellClicked slot responsible for handling the user clicks on the board positions.
    // only draws if the cell is one of the available moves, otherwide, neglect.
    // input row: the row index of the clicked position.
    // input col: the col index of the clicked position.
    void on_board_table_widget_cellClicked(int row, int column);

    // breif: on_main_menu_start_btn_clicked slot responsible for setting the game for the user.
    void on_main_menu_start_btn_clicked();

    // breif: on_main_menu_options_btn_clicked slot responsible for taking the user to the options menu.
    void on_main_menu_options_btn_clicked();

    // breif: on_main_menu_quit_btn_clicked slot responsible for asking the user to quit game
    // from main menu and handling his response.
    void on_main_menu_quit_btn_clicked();

    // breif: on_side_menu_quit_btn_clicked slot responsible for asking the user to quit game
    // from the game window and handling his response.
    void on_side_menu_quit_btn_clicked();

    // breif: on_side_menu_restart_btn_clicked slot responsible for restarting the game.
    void on_side_menu_restart_btn_clicked();

    // breif: on_side_menu_back_btn_clicked slot responsible for taking the user from the game window to the main menu.
    void on_side_menu_back_btn_clicked();

    void on_optionButton_clicked();

    // breif: on_back_options_btn_clicked slot responsible for taking the user from options menu to main menu.
    void on_back_options_btn_clicked();

    // breif: on_side_menu_sound_btn_clicked slot responsible for muting/unmuting game background music.
    void on_side_menu_sound_btn_clicked();

    void debug_board();
};
#endif // MAINWINDOW_H
