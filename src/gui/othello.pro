QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    sources/animatedradiobutton.cpp \
    sources/game_page_animation_handler.cpp \
    sources/mainwindow.cpp \
    sources/gamelogic.cpp \
    sources/ui_game_handler.cpp

HEADERS += \
    headers/animatedradiobutton.h \
    headers/game_page_animation_handler.h \
    headers/mainwindow.h \
    headers/macros.h \
    headers/gamelogic.h \
    headers/ui_game_handler.h

FORMS += \
    forms/mainwindow.ui

RC_ICONS = ./resources/icons/launcher_icons/app_ico.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/resources.qrc
