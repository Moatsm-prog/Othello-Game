#include "./headers/mainwindow.h"
#include "./headers/game_page_animation_handler.h"
#include "ui_mainwindow.h"

MenuAnimationHandler::MenuAnimationHandler(MainWindow *main_window){
    this->main_window = main_window;
}

MenuAnimationHandler::~MenuAnimationHandler(){
    delete this->side_menu_animation;
    delete this->restart_btn_animation;
    delete this->back_btn_animation;
    delete this->quit_btn_animation;
    delete this->group;
};

void MenuAnimationHandler::trigger_animation(){
    //creating the animations instances
    side_menu_animation = new QPropertyAnimation(main_window->ui->side_menu_frame, "minimumWidth");
    back_btn_animation = new QPropertyAnimation(main_window->ui->side_menu_back_btn, "minimumWidth");
    restart_btn_animation = new QPropertyAnimation(main_window->ui->side_menu_restart_btn, "minimumWidth");
    quit_btn_animation = new QPropertyAnimation(main_window->ui->side_menu_quit_btn, "minimumWidth");
    //getting the current values for the buttons and side menu frame width
    int cur_val = main_window->ui->side_menu_quit_btn->width();
    int side_menu_cur_val = main_window->ui->side_menu_frame->width();
    int end_val;
    int side_menu_end_val;
    QIcon icon = QIcon();
    //if the menu is currenlty collapsed
    if (cur_val < max_val)
    {
        //expand the width
        end_val = max_val;
        side_menu_end_val = side_menu_max_val;
        //set buttons text
        main_window->ui->side_menu_back_btn->setText(" Main Menu");
        main_window->ui->side_menu_restart_btn->setText("  Restart   ");
        main_window->ui->side_menu_quit_btn->setText("  QUIT       ");
        icon.addPixmap(QPixmap(":/icons48x48/icons/48x48/minimize_ico.png"), QIcon::Normal, QIcon::Off);
    }
    else
    {
        //collapse the width
        end_val = min_val;
        side_menu_end_val = side_menu_min_val;
        //remove buttons text
        main_window->ui->side_menu_back_btn->setText("");
        main_window->ui->side_menu_restart_btn->setText("");
        main_window->ui->side_menu_quit_btn->setText("");
        //change toggle icon
        icon.addPixmap(QPixmap(":/icons48x48/icons/48x48/dots_ico.png"), QIcon::Normal, QIcon::Off);
    }
    //set the new toggle icon
    main_window->ui->side_menu_toggle->setIcon(icon);
    //set animations parameters
    set_animation(restart_btn_animation, cur_val, end_val, dur);
    set_animation(quit_btn_animation, cur_val, end_val, dur);
    set_animation(back_btn_animation, cur_val, end_val, dur);
    set_animation(side_menu_animation, side_menu_cur_val, side_menu_end_val, dur);
    //create the animations group
    group = new QParallelAnimationGroup;
    //add the animations to the group
    group->addAnimation(side_menu_animation);
    group->addAnimation(back_btn_animation);
    group->addAnimation(restart_btn_animation);
    group->addAnimation(quit_btn_animation);
    // start the animations
    group->start();
};

void MenuAnimationHandler::set_animation(QPropertyAnimation *animation, int start_val, int end_val, int duration)
{
    animation->setDuration(duration);
    animation->setStartValue(start_val);
    animation->setEndValue(end_val);
};

