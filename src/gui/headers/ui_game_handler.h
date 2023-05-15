#ifndef UI_GAME_HANDLER_H
#define UI_GAME_HANDLER_H

//forward declaration of the MainWindow class
class MainWindow;

//UiGameHandler responsible for handling changes that occur to the ui due to game changes
class UiGameHandler{
private:
    //pointer to the main window to access its parameters
    MainWindow *main_window;

public:
    //brief: constructor of the class responsible for setting the main window pointer
    //input main_window: pointer to the main window to handle its side menu
    UiGameHandler(MainWindow *main_window);

    // breif: draw method responsible for drawing one of three types of widgets in a certain table position.
    // input x: the x/row co-ordinate of the widget.
    // input y: the y/column co-ordinate of the widget.
    // input turn: a flag that specefies the type of widget to be drawn - check the macros file for more information.
    // for type parameter, pass 1/BLACK, 0/WHITE, -1/INDICATOR
    void draw(int type, int x, int y);

    // breif: draw_initial_pieces method respoinsible for drawing the initial 4 pieces and available moves to play.
    void draw_initial_pieces();

    // breif: clear_table method respoinsible for cleaning the board table widget
    void clear_table();

    // breif: reset_game method respoinsible for cleaning the board, setting the initial 4 pieces, and resetting
    // both the scores and turn labels to their initial values
    void reset_game();

    // breif: set_black_score method responsible for setting the black player score on the UI.
    // input score: the score to set.
    void set_black_score(int score);

    // breif: set_white_score method responsible for setting the white player score on the UI.
    // input score: the score to set.
    void set_white_score(int score);

    // breif: set_turn_label method responsible for setting player's turn on the UI.
    // input turn: a flag that specefies the player in turn - check the macros file for more information
    // either pass 1/BLACK or 0/WHITE
    void set_turn_label(int turn);

};

#endif // UI_GAME_HANDLER_H
