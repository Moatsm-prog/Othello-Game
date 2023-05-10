/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1100, 750);
        MainWindow->setMinimumSize(QSize(1100, 750));
        MainWindow->setMaximumSize(QSize(1100, 750));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral("color: rgb(223,223,223);"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 0));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        stackedWidget->setStyleSheet(QLatin1String("QWidget#main_menu_page{\n"
"	border-image: url(:/imgs/recourses/imgs/othello_bg_half_trans.png) 0 0 0 0 stretch stretch;\n"
"}\n"
"\n"
""));
        main_menu_page = new QWidget();
        main_menu_page->setObjectName(QStringLiteral("main_menu_page"));
        main_menu_page->setStyleSheet(QLatin1String("/*PushButton*/\n"
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
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        main_page_frame = new QFrame(main_menu_page);
        main_page_frame->setObjectName(QStringLiteral("main_page_frame"));
        main_page_frame->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(main_page_frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        main_menu_start_btn = new QPushButton(main_page_frame);
        main_menu_start_btn->setObjectName(QStringLiteral("main_menu_start_btn"));
        main_menu_start_btn->setMinimumSize(QSize(200, 50));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(10);
        font.setBold(true);
        main_menu_start_btn->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons48x48/recourses/icons/48x48/start_game_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        main_menu_start_btn->setIcon(icon);
        main_menu_start_btn->setIconSize(QSize(28, 28));

        verticalLayout_3->addWidget(main_menu_start_btn);

        main_menu_options_btn = new QPushButton(main_page_frame);
        main_menu_options_btn->setObjectName(QStringLiteral("main_menu_options_btn"));
        main_menu_options_btn->setMinimumSize(QSize(200, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        main_menu_options_btn->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons48x48/recourses/icons/48x48/settings_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        main_menu_options_btn->setIcon(icon1);
        main_menu_options_btn->setIconSize(QSize(28, 28));

        verticalLayout_3->addWidget(main_menu_options_btn);

        main_menu_quit_btn = new QPushButton(main_page_frame);
        main_menu_quit_btn->setObjectName(QStringLiteral("main_menu_quit_btn"));
        main_menu_quit_btn->setMinimumSize(QSize(200, 50));
        main_menu_quit_btn->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons48x48/recourses/icons/48x48/quit_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        main_menu_quit_btn->setIcon(icon2);
        main_menu_quit_btn->setIconSize(QSize(28, 28));

        verticalLayout_3->addWidget(main_menu_quit_btn);


        verticalLayout_2->addWidget(main_page_frame, 0, Qt::AlignLeft|Qt::AlignVCenter);

        stackedWidget->addWidget(main_menu_page);
        game_page = new QWidget();
        game_page->setObjectName(QStringLiteral("game_page"));
        game_page->setStyleSheet(QLatin1String("/*PushButton*/\n"
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
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        side_menu_container_widget = new QWidget(game_page);
        side_menu_container_widget->setObjectName(QStringLiteral("side_menu_container_widget"));
        verticalLayout_6 = new QVBoxLayout(side_menu_container_widget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        side_menu_frame = new QFrame(side_menu_container_widget);
        side_menu_frame->setObjectName(QStringLiteral("side_menu_frame"));
        side_menu_frame->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setBold(true);
        side_menu_frame->setFont(font2);
        side_menu_frame->setFrameShape(QFrame::StyledPanel);
        side_menu_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(side_menu_frame);
        verticalLayout_7->setSpacing(14);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        side_menu_toggle = new QPushButton(side_menu_frame);
        side_menu_toggle->setObjectName(QStringLiteral("side_menu_toggle"));
        side_menu_toggle->setMinimumSize(QSize(50, 50));
        side_menu_toggle->setMaximumSize(QSize(50, 50));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons48x48/recourses/icons/48x48/dots_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        side_menu_toggle->setIcon(icon3);
        side_menu_toggle->setIconSize(QSize(28, 28));

        verticalLayout_7->addWidget(side_menu_toggle);

        side_menu_back_btn = new QPushButton(side_menu_frame);
        side_menu_back_btn->setObjectName(QStringLiteral("side_menu_back_btn"));
        side_menu_back_btn->setMinimumSize(QSize(50, 50));
        side_menu_back_btn->setMaximumSize(QSize(50, 50));
        side_menu_back_btn->setFont(font2);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons48x48/recourses/icons/48x48/arrow_back_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        side_menu_back_btn->setIcon(icon4);
        side_menu_back_btn->setIconSize(QSize(28, 28));

        verticalLayout_7->addWidget(side_menu_back_btn, 0, Qt::AlignTop);

        side_menu_restart_btn = new QPushButton(side_menu_frame);
        side_menu_restart_btn->setObjectName(QStringLiteral("side_menu_restart_btn"));
        side_menu_restart_btn->setMinimumSize(QSize(50, 50));
        side_menu_restart_btn->setMaximumSize(QSize(50, 50));
        side_menu_restart_btn->setFont(font2);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons48x48/recourses/icons/48x48/restart_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        side_menu_restart_btn->setIcon(icon5);
        side_menu_restart_btn->setIconSize(QSize(28, 28));

        verticalLayout_7->addWidget(side_menu_restart_btn, 0, Qt::AlignTop);

        side_menu_quit_btn = new QPushButton(side_menu_frame);
        side_menu_quit_btn->setObjectName(QStringLiteral("side_menu_quit_btn"));
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
        game_content_container_widget->setObjectName(QStringLiteral("game_content_container_widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(game_content_container_widget->sizePolicy().hasHeightForWidth());
        game_content_container_widget->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(game_content_container_widget);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        game_info_frame = new QFrame(game_content_container_widget);
        game_info_frame->setObjectName(QStringLiteral("game_info_frame"));
        game_info_frame->setMaximumSize(QSize(16777215, 70));
        game_info_frame->setFrameShape(QFrame::StyledPanel);
        game_info_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(game_info_frame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(game_info_frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI"));
        font3.setPointSize(13);
        font3.setBold(true);
        label_9->setFont(font3);

        horizontalLayout_6->addWidget(label_9);

        turn_label = new QLabel(game_info_frame);
        turn_label->setObjectName(QStringLiteral("turn_label"));
        turn_label->setFont(font3);

        horizontalLayout_6->addWidget(turn_label);


        horizontalLayout_2->addLayout(horizontalLayout_6);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(game_info_frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);

        horizontalLayout_5->addWidget(label_7);

        white_score_label = new QLabel(game_info_frame);
        white_score_label->setObjectName(QStringLiteral("white_score_label"));
        white_score_label->setFont(font3);

        horizontalLayout_5->addWidget(white_score_label);


        horizontalLayout_2->addLayout(horizontalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(game_info_frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);

        horizontalLayout_4->addWidget(label_5);

        black_score_label = new QLabel(game_info_frame);
        black_score_label->setObjectName(QStringLiteral("black_score_label"));
        black_score_label->setFont(font3);

        horizontalLayout_4->addWidget(black_score_label);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_8->addWidget(game_info_frame);

        board_frame = new QFrame(game_content_container_widget);
        board_frame->setObjectName(QStringLiteral("board_frame"));
        board_frame->setFrameShape(QFrame::StyledPanel);
        board_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(board_frame);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
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
        board_table_widget->setObjectName(QStringLiteral("board_table_widget"));
        board_table_widget->setMaximumSize(QSize(660, 16777215));
        board_table_widget->setStyleSheet(QLatin1String("QTableWidget {\n"
"	background-color: rgb(0, 150, 0);\n"
"	color: rgb(223, 223, 223);\n"
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
        board_table_widget->horizontalHeader()->setDefaultSectionSize(80);
        board_table_widget->horizontalHeader()->setMinimumSectionSize(80);
        board_table_widget->verticalHeader()->setVisible(false);
        board_table_widget->verticalHeader()->setDefaultSectionSize(70);
        board_table_widget->verticalHeader()->setMinimumSectionSize(70);

        horizontalLayout_3->addWidget(board_table_widget);


        verticalLayout_8->addWidget(board_frame);


        horizontalLayout->addWidget(game_content_container_widget);

        stackedWidget->addWidget(game_page);
        options_page = new QWidget();
        options_page->setObjectName(QStringLiteral("options_page"));
        stackedWidget->addWidget(options_page);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        main_menu_start_btn->setText(QApplication::translate("MainWindow", "   START   ", nullptr));
        main_menu_options_btn->setText(QApplication::translate("MainWindow", "  OPTIONS", nullptr));
        main_menu_quit_btn->setText(QApplication::translate("MainWindow", "    QUIT     ", nullptr));
        side_menu_toggle->setText(QString());
        side_menu_back_btn->setText(QString());
        side_menu_restart_btn->setText(QString());
        side_menu_quit_btn->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Turn :", nullptr));
        turn_label->setText(QApplication::translate("MainWindow", "Black", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "White :", nullptr));
        white_score_label->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Black :", nullptr));
        black_score_label->setText(QApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem = board_table_widget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = board_table_widget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = board_table_widget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = board_table_widget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = board_table_widget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = board_table_widget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = board_table_widget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = board_table_widget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = board_table_widget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = board_table_widget->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = board_table_widget->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = board_table_widget->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = board_table_widget->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = board_table_widget->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = board_table_widget->verticalHeaderItem(6);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = board_table_widget->verticalHeaderItem(7);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "New Row", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
