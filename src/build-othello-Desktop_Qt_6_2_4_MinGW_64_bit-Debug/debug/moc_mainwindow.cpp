/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../gui/headers/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[42];
    char stringdata0[466];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 27), // "on_side_menu_toggle_clicked"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 33), // "on_board_table_widget_cellCli..."
QT_MOC_LITERAL(74, 3), // "row"
QT_MOC_LITERAL(78, 6), // "column"
QT_MOC_LITERAL(85, 30), // "on_main_menu_start_btn_clicked"
QT_MOC_LITERAL(116, 32), // "on_main_menu_options_btn_clicked"
QT_MOC_LITERAL(149, 29), // "on_main_menu_quit_btn_clicked"
QT_MOC_LITERAL(179, 29), // "on_side_menu_quit_btn_clicked"
QT_MOC_LITERAL(209, 32), // "on_side_menu_restart_btn_clicked"
QT_MOC_LITERAL(242, 29), // "on_side_menu_back_btn_clicked"
QT_MOC_LITERAL(272, 23), // "on_optionButton_clicked"
QT_MOC_LITERAL(296, 27), // "on_back_options_btn_clicked"
QT_MOC_LITERAL(324, 30), // "on_side_menu_sound_btn_clicked"
QT_MOC_LITERAL(355, 11), // "debug_board"
QT_MOC_LITERAL(367, 12), // "make_ai_move"
QT_MOC_LITERAL(380, 4), // "diff"
QT_MOC_LITERAL(385, 23), // "on_ai_ai_option_clicked"
QT_MOC_LITERAL(409, 26), // "on_human_ai_option_clicked"
QT_MOC_LITERAL(436, 29) // "on_human_human_option_clicked"

    },
    "MainWindow\0on_side_menu_toggle_clicked\0"
    "\0on_board_table_widget_cellClicked\0"
    "row\0column\0on_main_menu_start_btn_clicked\0"
    "on_main_menu_options_btn_clicked\0"
    "on_main_menu_quit_btn_clicked\0"
    "on_side_menu_quit_btn_clicked\0"
    "on_side_menu_restart_btn_clicked\0"
    "on_side_menu_back_btn_clicked\0"
    "on_optionButton_clicked\0"
    "on_back_options_btn_clicked\0"
    "on_side_menu_sound_btn_clicked\0"
    "debug_board\0make_ai_move\0diff\0"
    "on_ai_ai_option_clicked\0"
    "on_human_ai_option_clicked\0"
    "on_human_human_option_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    2,  111,    2, 0x08,    2 /* Private */,
       6,    0,  116,    2, 0x08,    5 /* Private */,
       7,    0,  117,    2, 0x08,    6 /* Private */,
       8,    0,  118,    2, 0x08,    7 /* Private */,
       9,    0,  119,    2, 0x08,    8 /* Private */,
      10,    0,  120,    2, 0x08,    9 /* Private */,
      11,    0,  121,    2, 0x08,   10 /* Private */,
      12,    0,  122,    2, 0x08,   11 /* Private */,
      13,    0,  123,    2, 0x08,   12 /* Private */,
      14,    0,  124,    2, 0x08,   13 /* Private */,
      15,    0,  125,    2, 0x08,   14 /* Private */,
      16,    1,  126,    2, 0x08,   15 /* Private */,
      18,    0,  129,    2, 0x08,   17 /* Private */,
      19,    0,  130,    2, 0x08,   18 /* Private */,
      20,    0,  131,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_side_menu_toggle_clicked(); break;
        case 1: _t->on_board_table_widget_cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->on_main_menu_start_btn_clicked(); break;
        case 3: _t->on_main_menu_options_btn_clicked(); break;
        case 4: _t->on_main_menu_quit_btn_clicked(); break;
        case 5: _t->on_side_menu_quit_btn_clicked(); break;
        case 6: _t->on_side_menu_restart_btn_clicked(); break;
        case 7: _t->on_side_menu_back_btn_clicked(); break;
        case 8: _t->on_optionButton_clicked(); break;
        case 9: _t->on_back_options_btn_clicked(); break;
        case 10: _t->on_side_menu_sound_btn_clicked(); break;
        case 11: _t->debug_board(); break;
        case 12: { bool _r = _t->make_ai_move((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->on_ai_ai_option_clicked(); break;
        case 14: _t->on_human_ai_option_clicked(); break;
        case 15: _t->on_human_human_option_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE