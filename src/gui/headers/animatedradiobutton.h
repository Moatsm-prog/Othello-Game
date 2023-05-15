#ifndef ANIMATEDRADIOBUTTON_H
#define ANIMATEDRADIOBUTTON_H
#include "qpropertyanimation.h"
#include<QRadioButton>

#define DEFAULT_WIDTH 60
#define DEFAULT_HEIGHT 28
#define DEFAULT_CIRCLE_COLOR "#DDD"
#define DEFAULT_BG_COLOR "#777"
#define DAFAULT_ACTIVE_BG_COLOR "#55aaff"
#define DEFAULT_CIRCLE_POS 3
#define DEFAULT_ANIMATION_DUR 400

//class AnimatedRadioButtom responsible for overriding the QRadioButton to apply more modern behaviour
class AnimatedRadioButton: public QRadioButton
{
    Q_OBJECT
    Q_PROPERTY(float circlePosition READ circlePosition WRITE setCirclePosition)

public:
    //brief: constrcutor of the class responsible for initializing all of its settings
    AnimatedRadioButton(QWidget *parent = nullptr);

    //brief: destructor of the class responsible for deleting its animation pointer
    ~AnimatedRadioButton();

    //brief: circlePosition method is the getter of the circlePosition property
    float circlePosition() const;

    //brief: setCirclePosition method is the setter of the circlePosition property
    //input pos: the new position to be set
    void setCirclePosition(float pos);

    //brief: start_transition method responsible for doing the animation transition
    //input value: the value that determines the direction of the animation (on/off)
    void start_transition(int value);

private:
    //the width of the animated radio button
    int _width;

    //the height of the animated radio button
    int _height;

    //the color of the moving circle
    QString circle_color;

    //the animated radio button background color
    QString background_color;

    //the animated radio button active background color
    QString active_color;

    //the variable representing the circlePosition property
    double m_circlePosition;

    //pointer to the animation instance of the animated radio button
    QPropertyAnimation *animation;

protected:
    //brief: overriding the hitButton method in QRadioButton to catch any clicks on its new drawn interface
    bool hitButton(const QPoint &pos) const override;

    //brief: overriding the paintEvent method in QRadioButton to apply the modern interface
    void paintEvent(QPaintEvent *event) override;
};



#endif // ANIMATEDRADIOBUTTON_H
