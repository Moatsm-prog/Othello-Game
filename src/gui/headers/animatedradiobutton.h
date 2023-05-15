#ifndef ANIMATEDRADIOBUTTON_H
#define ANIMATEDRADIOBUTTON_H
#include "qpropertyanimation.h"
#include<QRadioButton>




class AnimatedRadioButton: public QRadioButton
{
    Q_OBJECT
    Q_PROPERTY(float circlePosition READ circlePosition WRITE setCirclePosition)

public:
    AnimatedRadioButton(QWidget *parent = nullptr);
    ~AnimatedRadioButton();
    float circlePosition() const;
    void setCirclePosition(float pos);
    void start_transition(int value);
    void paint();

private:
    int _width;
    int _height;
    QString circle_color;
    QString background_color;
    QString active_color;
    double m_circlePosition;
    QEasingCurve animation_curve;
    QPropertyAnimation *animation;

protected:
    bool hitButton(const QPoint &pos) const override;
    void paintEvent(QPaintEvent *event) override;
};



#endif // ANIMATEDRADIOBUTTON_H
