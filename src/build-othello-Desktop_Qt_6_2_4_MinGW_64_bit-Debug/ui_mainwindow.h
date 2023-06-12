/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "./headers/animatedradiobutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *main_menu_page;
    QVBoxLayout *verticalLayout_2;
    QFrame *main_page_frame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *main_menu_start_btn;
    QPushButton *main_menu_options_btn;
    QPushButton *main_menu_quit_btn;
    QWidget *game_page;
    QHBoxLayout *horizontalLayout;
    QWidget *side_menu_container_widget;
    QVBoxLayout *verticalLayout_6;
    QFrame *side_menu_frame;
    QVBoxLayout *verticalLayout_7;
    QPushButton *side_menu_toggle;
    QPushButton *side_menu_sound_btn;
    QPushButton *side_menu_back_btn;
    QPushButton *side_menu_restart_btn;
    QPushButton *side_menu_quit_btn;
    QSpacerItem *verticalSpacer;
    QWidget *game_content_container_widget;
    QVBoxLayout *verticalLayout_8;
    QFrame *game_info_frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLabel *turn_label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLabel *white_score_label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *black_score_label;
    QSpacerItem *horizontalSpacer_4;
    QFrame *board_frame;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *board_table_widget;
    QWidget *options_page;
    QVBoxLayout *verticalLayout_36;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_15;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_30;
    QGroupBox *players_group_box;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    AnimatedRadioButton *ai_ai_option;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    AnimatedRadioButton *human_ai_option;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    AnimatedRadioButton *human_human_option;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_32;
    QGroupBox *black_difficulty_group_box;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    AnimatedRadioButton *easy_option;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    AnimatedRadioButton *medium_option;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    AnimatedRadioButton *hard_option;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_34;
    QGroupBox *white_difficulty_group_box;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    AnimatedRadioButton *easy_option_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    AnimatedRadioButton *medium_option_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_12;
    AnimatedRadioButton *hard_option_2;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *optionButton;
    QPushButton *default_options_btn;
    QPushButton *back_options_btn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 750);
        MainWindow->setMinimumSize(QSize(1100, 750));
        MainWindow->setMaximumSize(QSize(1100, 750));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("color: rgb(223,223,223);"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 0));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget#main_menu_page{\n"
"	border-image: url(:imgs/imgs/othello_bg_half_trans.png) 0 0 0 0 stretch stretch;\n"
"}\n"
"\n"
""));
        main_menu_page = new QWidget();
        main_menu_page->setObjectName(QString::fromUtf8("main_menu_page"));
        main_menu_page->setStyleSheet(QString::fromUtf8("/*PushButton*/\n"
"QPushButton {\n"
"	border: 2px solid rgb(52, 59, 72);\n"
"	background-color: rgb(52, 59, 72);\n"
"	color: rgb(223, 223, 223);\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(57, 65, 80);\n"
"	border: 2px solid rgb(61, 70, 86);\n"
"}\n"
"QPushButton:pressed {	\n"
"	background-color: rgb(35, 40, 49);\n"
"	border: 2px solid rgb(43, 50, 61);\n"
"}\n"
""));
        verticalLayout_2 = new QVBoxLayout(main_menu_page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        main_page_frame = new QFrame(main_menu_page);
        main_page_frame->setObjectName(QString::fromUtf8("main_page_frame"));
        main_page_frame->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(main_page_frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        main_menu_start_btn = new QPushButton(main_page_frame);
        main_menu_start_btn->setObjectName(QString::fromUtf8("main_menu_start_btn"));
        main_menu_start_btn->setMinimumSize(QSize(200, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(10);
        font.setBold(true);
        main_menu_start_btn->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons48x48/icons/48x48/start_game_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        main_menu_start_btn->setIcon(icon);
        main_menu_start_btn->setIconSize(QSize(28, 28));

        verticalLayout_3->addWidget(main_menu_start_btn);

        main_menu_options_btn = new QPushButton(main_page_frame);
        main_menu_options_btn->setObjectName(QString::fromUtf8("main_menu_options_btn"));
        main_menu_options_btn->setMinimumSize(QSize(200, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        main_menu_options_btn->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons48x48/icons/48x48/settings_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        main_menu_options_btn->setIcon(icon1);
        main_menu_options_btn->setIconSize(QSize(28, 28));

        verticalLayout_3->addWidget(main_menu_options_btn);

        main_menu_quit_btn = new QPushButton(main_page_frame);
        main_menu_quit_btn->setObjectName(QString::fromUtf8("main_menu_quit_btn"));
        main_menu_quit_btn->setMinimumSize(QSize(200, 50));
        main_menu_quit_btn->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons48x48/icons/48x48/quit_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        main_menu_quit_btn->setIcon(icon2);
        main_menu_quit_btn->setIconSize(QSize(28, 28));

        verticalLayout_3->addWidget(main_menu_quit_btn);


        verticalLayout_2->addWidget(main_page_frame, 0, Qt::AlignLeft|Qt::AlignVCenter);

        stackedWidget->addWidget(main_menu_page);
        game_page = new QWidget();
        game_page->setObjectName(QString::fromUtf8("game_page"));
        game_page->setStyleSheet(QString::fromUtf8("/*PushButton*/\n"
"QPushButton {\n"
"	border: 2px solid rgb(52, 59, 72);\n"
"	background-color: rgb(52, 59, 72);\n"
"	color: rgb(223, 223, 223);\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(57, 65, 80);\n"
"	border: 2px solid rgb(61, 70, 86);\n"
"}\n"
"QPushButton:pressed {	\n"
"	background-color: rgb(35, 40, 49);\n"
"	border: 2px solid rgb(43, 50, 61);\n"
"}\n"
"QWidget#game_page{\n"
"	background-color: rgb(44, 49, 59);\n"
"}\n"
"/*Frame*/\n"
"QFrame{\n"
"	border-radius: 15px;\n"
"	background-color: rgb(37, 40, 50);\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(game_page);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        side_menu_container_widget = new QWidget(game_page);
        side_menu_container_widget->setObjectName(QString::fromUtf8("side_menu_container_widget"));
        verticalLayout_6 = new QVBoxLayout(side_menu_container_widget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        side_menu_frame = new QFrame(side_menu_container_widget);
        side_menu_frame->setObjectName(QString::fromUtf8("side_menu_frame"));
        side_menu_frame->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setBold(true);
        side_menu_frame->setFont(font2);
        side_menu_frame->setFrameShape(QFrame::StyledPanel);
        side_menu_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(side_menu_frame);
        verticalLayout_7->setSpacing(14);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        side_menu_toggle = new QPushButton(side_menu_frame);
        side_menu_toggle->setObjectName(QString::fromUtf8("side_menu_toggle"));
        side_menu_toggle->setMinimumSize(QSize(50, 50));
        side_menu_toggle->setMaximumSize(QSize(50, 50));
        side_menu_toggle->setFont(font2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons48x48/icons/48x48/dots_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        side_menu_toggle->setIcon(icon3);
        side_menu_toggle->setIconSize(QSize(28, 28));

        verticalLayout_7->addWidget(side_menu_toggle);

        side_menu_sound_btn = new QPushButton(side_menu_frame);
        side_menu_sound_btn->setObjectName(QString::fromUtf8("side_menu_sound_btn"));
        side_menu_sound_btn->setMinimumSize(QSize(50, 50));
        side_menu_sound_btn->setFont(font2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons48x48/icons/48x48/volume_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        side_menu_sound_btn->setIcon(icon4);
        side_menu_sound_btn->setIconSize(QSize(28, 28));

        verticalLayout_7->addWidget(side_menu_sound_btn);

        side_menu_back_btn = new QPushButton(side_menu_frame);
        side_menu_back_btn->setObjectName(QString::fromUtf8("side_menu_back_btn"));
        side_menu_back_btn->setMinimumSize(QSize(50, 50));
        side_menu_back_btn->setMaximumSize(QSize(50, 50));
        side_menu_back_btn->setFont(font2);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons48x48/icons/48x48/arrow_back_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        side_menu_back_btn->setIcon(icon5);
        side_menu_back_btn->setIconSize(QSize(28, 28));

        verticalLayout_7->addWidget(side_menu_back_btn, 0, Qt::AlignTop);

        side_menu_restart_btn = new QPushButton(side_menu_frame);
        side_menu_restart_btn->setObjectName(QString::fromUtf8("side_menu_restart_btn"));
        side_menu_restart_btn->setMinimumSize(QSize(50, 50));
        side_menu_restart_btn->setMaximumSize(QSize(50, 50));
        side_menu_restart_btn->setFont(font2);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons48x48/icons/48x48/restart_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        side_menu_restart_btn->setIcon(icon6);
        side_menu_restart_btn->setIconSize(QSize(28, 28));

        verticalLayout_7->addWidget(side_menu_restart_btn, 0, Qt::AlignTop);

        side_menu_quit_btn = new QPushButton(side_menu_frame);
        side_menu_quit_btn->setObjectName(QString::fromUtf8("side_menu_quit_btn"));
        side_menu_quit_btn->setMinimumSize(QSize(50, 50));
        side_menu_quit_btn->setMaximumSize(QSize(50, 50));
        side_menu_quit_btn->setFont(font2);
        side_menu_quit_btn->setIcon(icon2);
        side_menu_quit_btn->setIconSize(QSize(28, 28));

        verticalLayout_7->addWidget(side_menu_quit_btn, 0, Qt::AlignTop);


        verticalLayout_6->addWidget(side_menu_frame);

        verticalSpacer = new QSpacerItem(20, 455, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        horizontalLayout->addWidget(side_menu_container_widget, 0, Qt::AlignLeft);

        game_content_container_widget = new QWidget(game_page);
        game_content_container_widget->setObjectName(QString::fromUtf8("game_content_container_widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(game_content_container_widget->sizePolicy().hasHeightForWidth());
        game_content_container_widget->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(game_content_container_widget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        game_info_frame = new QFrame(game_content_container_widget);
        game_info_frame->setObjectName(QString::fromUtf8("game_info_frame"));
        game_info_frame->setMaximumSize(QSize(16777215, 70));
        game_info_frame->setFrameShape(QFrame::StyledPanel);
        game_info_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(game_info_frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(game_info_frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(13);
        font3.setBold(true);
        label_9->setFont(font3);

        horizontalLayout_6->addWidget(label_9);

        turn_label = new QLabel(game_info_frame);
        turn_label->setObjectName(QString::fromUtf8("turn_label"));
        turn_label->setFont(font3);

        horizontalLayout_6->addWidget(turn_label);


        horizontalLayout_2->addLayout(horizontalLayout_6);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(game_info_frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);

        horizontalLayout_5->addWidget(label_7);

        white_score_label = new QLabel(game_info_frame);
        white_score_label->setObjectName(QString::fromUtf8("white_score_label"));
        white_score_label->setFont(font3);

        horizontalLayout_5->addWidget(white_score_label);


        horizontalLayout_2->addLayout(horizontalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(game_info_frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);

        horizontalLayout_4->addWidget(label_5);

        black_score_label = new QLabel(game_info_frame);
        black_score_label->setObjectName(QString::fromUtf8("black_score_label"));
        black_score_label->setFont(font3);

        horizontalLayout_4->addWidget(black_score_label);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_8->addWidget(game_info_frame);

        board_frame = new QFrame(game_content_container_widget);
        board_frame->setObjectName(QString::fromUtf8("board_frame"));
        board_frame->setFrameShape(QFrame::StyledPanel);
        board_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(board_frame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, 0, 11);
        board_table_widget = new QTableWidget(board_frame);
        if (board_table_widget->columnCount() < 8)
            board_table_widget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        board_table_widget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        board_table_widget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        board_table_widget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        board_table_widget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        board_table_widget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        board_table_widget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        board_table_widget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        board_table_widget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (board_table_widget->rowCount() < 8)
            board_table_widget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        board_table_widget->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        board_table_widget->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        board_table_widget->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        board_table_widget->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        board_table_widget->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        board_table_widget->setVerticalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        board_table_widget->setVerticalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        board_table_widget->setVerticalHeaderItem(7, __qtablewidgetitem15);
        board_table_widget->setObjectName(QString::fromUtf8("board_table_widget"));
        board_table_widget->setMaximumSize(QSize(665, 16777215));
        board_table_widget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"	background-color: rgb(4, 135, 69);\n"
"	color: rgb(223, 223, 223);\n"
"	border: 1px solid rgb(0, 0, 0);\n"
"	padding: 10px;\n"
"	gridline-color: rgb(44, 100, 59);\n"
"}\n"
"\n"
"QTableWidget::item:selected{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
""));
        board_table_widget->setFrameShape(QFrame::NoFrame);
        board_table_widget->setFrameShadow(QFrame::Sunken);
        board_table_widget->horizontalHeader()->setVisible(false);
        board_table_widget->horizontalHeader()->setMinimumSectionSize(80);
        board_table_widget->horizontalHeader()->setDefaultSectionSize(80);
        board_table_widget->verticalHeader()->setVisible(false);
        board_table_widget->verticalHeader()->setMinimumSectionSize(70);
        board_table_widget->verticalHeader()->setDefaultSectionSize(70);

        horizontalLayout_3->addWidget(board_table_widget);


        verticalLayout_8->addWidget(board_frame);


        horizontalLayout->addWidget(game_content_container_widget);

        stackedWidget->addWidget(game_page);
        options_page = new QWidget();
        options_page->setObjectName(QString::fromUtf8("options_page"));
        options_page->setStyleSheet(QString::fromUtf8("/*PushButton*/\n"
"QPushButton {\n"
"	border: 2px solid rgb(52, 59, 72);\n"
"	background-color: rgb(52, 59, 72);\n"
"	color: rgb(223, 223, 223);\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(57, 65, 80);\n"
"	border: 2px solid rgb(61, 70, 86);\n"
"}\n"
"QPushButton:pressed {	\n"
"	background-color: rgb(35, 40, 49);\n"
"	border: 2px solid rgb(43, 50, 61);\n"
"}\n"
"/*Frame*/\n"
"QFrame{\n"
"	border-radius: 15px;\n"
"	background-color: rgb(37, 40, 50);\n"
"}\n"
"QWidget#options_page{\n"
"	background-color: rgb(44, 49, 59);\n"
"}"));
        verticalLayout_36 = new QVBoxLayout(options_page);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        widget = new QWidget(options_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QGroupBox::title{\n"
"    color: rgb(223, 223, 223);\n"
"	top:-9px;\n"
"}\n"
"QGroupBox{\n"
"        margin-top:6px; \n"
"        padding-top: 10px;\n"
"        background-color: transparent;\n"
"		border-top: 2px solid white;\n"
"}"));
        horizontalLayout_15 = new QHBoxLayout(widget);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        frame_7 = new QFrame(widget);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_30 = new QVBoxLayout(frame_7);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        players_group_box = new QGroupBox(frame_7);
        players_group_box->setObjectName(QString::fromUtf8("players_group_box"));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        players_group_box->setFont(font4);
        players_group_box->setFlat(false);
        verticalLayout_4 = new QVBoxLayout(players_group_box);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(players_group_box);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font4);

        horizontalLayout_7->addWidget(label);

        ai_ai_option = new AnimatedRadioButton(players_group_box);
        ai_ai_option->setObjectName(QString::fromUtf8("ai_ai_option"));

        horizontalLayout_7->addWidget(ai_ai_option);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(players_group_box);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font4);

        horizontalLayout_8->addWidget(label_2);

        human_ai_option = new AnimatedRadioButton(players_group_box);
        human_ai_option->setObjectName(QString::fromUtf8("human_ai_option"));
        human_ai_option->setChecked(true);

        horizontalLayout_8->addWidget(human_ai_option);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_3 = new QLabel(players_group_box);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font4);

        horizontalLayout_9->addWidget(label_3);

        human_human_option = new AnimatedRadioButton(players_group_box);
        human_human_option->setObjectName(QString::fromUtf8("human_human_option"));

        horizontalLayout_9->addWidget(human_human_option);


        verticalLayout_4->addLayout(horizontalLayout_9);


        verticalLayout_30->addWidget(players_group_box);


        horizontalLayout_15->addWidget(frame_7);

        frame_8 = new QFrame(widget);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setEnabled(true);
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_32 = new QVBoxLayout(frame_8);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        black_difficulty_group_box = new QGroupBox(frame_8);
        black_difficulty_group_box->setObjectName(QString::fromUtf8("black_difficulty_group_box"));
        black_difficulty_group_box->setFont(font4);
        black_difficulty_group_box->setFlat(false);
        verticalLayout_5 = new QVBoxLayout(black_difficulty_group_box);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_4 = new QLabel(black_difficulty_group_box);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font4);

        horizontalLayout_10->addWidget(label_4);

        easy_option = new AnimatedRadioButton(black_difficulty_group_box);
        easy_option->setObjectName(QString::fromUtf8("easy_option"));
        easy_option->setChecked(true);

        horizontalLayout_10->addWidget(easy_option);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(black_difficulty_group_box);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font4);

        horizontalLayout_11->addWidget(label_6);

        medium_option = new AnimatedRadioButton(black_difficulty_group_box);
        medium_option->setObjectName(QString::fromUtf8("medium_option"));

        horizontalLayout_11->addWidget(medium_option);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_8 = new QLabel(black_difficulty_group_box);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font4);

        horizontalLayout_12->addWidget(label_8);

        hard_option = new AnimatedRadioButton(black_difficulty_group_box);
        hard_option->setObjectName(QString::fromUtf8("hard_option"));

        horizontalLayout_12->addWidget(hard_option);


        verticalLayout_5->addLayout(horizontalLayout_12);


        verticalLayout_32->addWidget(black_difficulty_group_box);


        horizontalLayout_15->addWidget(frame_8);

        frame_9 = new QFrame(widget);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_34 = new QVBoxLayout(frame_9);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        white_difficulty_group_box = new QGroupBox(frame_9);
        white_difficulty_group_box->setObjectName(QString::fromUtf8("white_difficulty_group_box"));
        white_difficulty_group_box->setFont(font4);
        white_difficulty_group_box->setFlat(false);
        verticalLayout_9 = new QVBoxLayout(white_difficulty_group_box);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_10 = new QLabel(white_difficulty_group_box);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font4);

        horizontalLayout_13->addWidget(label_10);

        easy_option_2 = new AnimatedRadioButton(white_difficulty_group_box);
        easy_option_2->setObjectName(QString::fromUtf8("easy_option_2"));
        easy_option_2->setChecked(true);

        horizontalLayout_13->addWidget(easy_option_2);


        verticalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_11 = new QLabel(white_difficulty_group_box);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font4);

        horizontalLayout_14->addWidget(label_11);

        medium_option_2 = new AnimatedRadioButton(white_difficulty_group_box);
        medium_option_2->setObjectName(QString::fromUtf8("medium_option_2"));

        horizontalLayout_14->addWidget(medium_option_2);


        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_12 = new QLabel(white_difficulty_group_box);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font4);

        horizontalLayout_16->addWidget(label_12);

        hard_option_2 = new AnimatedRadioButton(white_difficulty_group_box);
        hard_option_2->setObjectName(QString::fromUtf8("hard_option_2"));

        horizontalLayout_16->addWidget(hard_option_2);


        verticalLayout_9->addLayout(horizontalLayout_16);


        verticalLayout_34->addWidget(white_difficulty_group_box);


        horizontalLayout_15->addWidget(frame_9);


        verticalLayout_36->addWidget(widget);

        frame_10 = new QFrame(options_page);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_10);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        optionButton = new QPushButton(frame_10);
        optionButton->setObjectName(QString::fromUtf8("optionButton"));
        optionButton->setMinimumSize(QSize(200, 50));
        optionButton->setFont(font4);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons48x48/icons/48x48/done_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        optionButton->setIcon(icon7);
        optionButton->setIconSize(QSize(28, 28));

        horizontalLayout_17->addWidget(optionButton);

        default_options_btn = new QPushButton(frame_10);
        default_options_btn->setObjectName(QString::fromUtf8("default_options_btn"));
        default_options_btn->setMinimumSize(QSize(200, 50));
        default_options_btn->setFont(font4);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons48x48/icons/48x48/restore_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        default_options_btn->setIcon(icon8);
        default_options_btn->setIconSize(QSize(28, 28));

        horizontalLayout_17->addWidget(default_options_btn);

        back_options_btn = new QPushButton(frame_10);
        back_options_btn->setObjectName(QString::fromUtf8("back_options_btn"));
        back_options_btn->setMinimumSize(QSize(200, 50));
        back_options_btn->setFont(font4);
        back_options_btn->setIcon(icon5);
        back_options_btn->setIconSize(QSize(28, 28));

        horizontalLayout_17->addWidget(back_options_btn);


        verticalLayout_36->addWidget(frame_10, 0, Qt::AlignTop);

        stackedWidget->addWidget(options_page);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        main_menu_start_btn->setText(QCoreApplication::translate("MainWindow", "   START   ", nullptr));
        main_menu_options_btn->setText(QCoreApplication::translate("MainWindow", "  OPTIONS", nullptr));
        main_menu_quit_btn->setText(QCoreApplication::translate("MainWindow", "    QUIT     ", nullptr));
        side_menu_toggle->setText(QString());
        side_menu_sound_btn->setText(QString());
        side_menu_back_btn->setText(QString());
        side_menu_restart_btn->setText(QString());
        side_menu_quit_btn->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Turn :", nullptr));
        turn_label->setText(QCoreApplication::translate("MainWindow", "Black", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "White :", nullptr));
        white_score_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Black :", nullptr));
        black_score_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem = board_table_widget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = board_table_widget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = board_table_widget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = board_table_widget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = board_table_widget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = board_table_widget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = board_table_widget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = board_table_widget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = board_table_widget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = board_table_widget->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = board_table_widget->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = board_table_widget->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = board_table_widget->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = board_table_widget->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = board_table_widget->verticalHeaderItem(6);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = board_table_widget->verticalHeaderItem(7);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        players_group_box->setTitle(QCoreApplication::translate("MainWindow", "Game Mode", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "AI vs AI", nullptr));
        ai_ai_option->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Human vs AI", nullptr));
        human_ai_option->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Human vs Human", nullptr));
        human_human_option->setText(QString());
        black_difficulty_group_box->setTitle(QCoreApplication::translate("MainWindow", "Black AI Difficulty level", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        easy_option->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Medium", nullptr));
        medium_option->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
        hard_option->setText(QString());
        white_difficulty_group_box->setTitle(QCoreApplication::translate("MainWindow", "White AI Difficulty level ", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        easy_option_2->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "Medium", nullptr));
        medium_option_2->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
        hard_option_2->setText(QString());
        optionButton->setText(QCoreApplication::translate("MainWindow", "  DONE", nullptr));
        default_options_btn->setText(QCoreApplication::translate("MainWindow", "  RESTORE DEFAULT", nullptr));
        back_options_btn->setText(QCoreApplication::translate("MainWindow", "  BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
