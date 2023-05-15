#ifndef GAME_PAGE_ANIMATION_HANDLER_H
#define GAME_PAGE_ANIMATION_HANDLER_H
#include "qparallelanimationgroup.h"
#include "qpropertyanimation.h"
#define min_val 50
#define max_val 130
#define side_menu_min_val 72
#define side_menu_max_val 150
#define dur 150

//forward declaration of the MainWindow class
class MainWindow;

//MenuAnimationClass responsible for handling the side menu animation of the main window
class MenuAnimationHandler{
private:
    //pointer to the main window to access its parameters
    MainWindow *main_window;
    //the buttons propertie animations
    QPropertyAnimation *side_menu_animation;
    QPropertyAnimation *restart_btn_animation;
    QPropertyAnimation *back_btn_animation;
    QPropertyAnimation *quit_btn_animation;
    //the animation group responsible for triggering all previous animations at the same time
    QParallelAnimationGroup *group;

public:
    //brief: constructor of the class responsible for setting the main window pointer
    //input main_window: pointer to the main window to handle its side menu
    MenuAnimationHandler(MainWindow *main_window);

    //bried: destructor of the class resposible for deleting the created animations.
    ~MenuAnimationHandler();

    // brief: trigger_animation method responsible for triggering the side menu animations.
    void trigger_animation();

    // breif: set_animation method responsible for setting the animation paramters.
    // input animation: pointer to the animation to set its paramters.
    // input start_val: the start value of the animation.
    // input end_val: the end value of the animation.
    // input duration: the duration of the animation.
    void set_animation(QPropertyAnimation *animation, int start_val, int end_val, int duration);
};

#endif // GAME_PAGE_ANIMATION_HANDLER_H
