#include "../headers/animatedradiobutton.h"
#include "qdebug.h"
#include "qeasingcurve.h"
#include <QPaintEvent>
#include <QPainter>

AnimatedRadioButton::AnimatedRadioButton(QWidget *parent): QRadioButton(parent)
{
    //setting the used parameters for customizing the radio button
    _width = 60;
    _height = 28;
    circle_color = "#DDD";
    background_color = "#777";
    active_color = "#55aaff";
    m_circlePosition = 3;
    //this->setChecked(true);
    //animation_curve = QEasingCurve::OutBounce;
    animation = new QPropertyAnimation(this, "circlePosition", this);
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->setDuration(400);
    this->setCursor(Qt::PointingHandCursor);
    this->setFixedSize(this->_width, this->_height);
    connect(this, &AnimatedRadioButton::toggled, this, &AnimatedRadioButton::start_transition);
}

AnimatedRadioButton::~AnimatedRadioButton(){
    delete this->animation;
}

float AnimatedRadioButton::circlePosition() const {
    return m_circlePosition;
}

void AnimatedRadioButton::setCirclePosition(float pos) {
    m_circlePosition = pos;
    this->update();
}

bool AnimatedRadioButton::hitButton(const QPoint &pos) const{
    return this->contentsRect().contains(pos);
}

void AnimatedRadioButton::start_transition(int value){
    this->animation->stop();
    if (value)
        this->animation->setEndValue(this->width()-26);
    else
        this->animation->setEndValue(3);
    this->animation->start();
}

void AnimatedRadioButton::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::NoPen);
    if (!this->isChecked()) {
        // drawing the background
        painter.setBrush(QColor(background_color));
        painter.drawRoundedRect(0, 0, width(), height(), height() / 2, height() / 2);
        // drawing the circle button
        painter.setBrush(QColor(circle_color));
        painter.drawEllipse(static_cast<int>(m_circlePosition), 3, 22, 22);
    } else {
        // drawing the background
        painter.setBrush(QColor(active_color));
        painter.drawRoundedRect(0, 0, width(), height(), height() / 2, height() / 2);
        // drawing the circle button
        painter.setBrush(QColor(circle_color));
        painter.drawEllipse(static_cast<int>(m_circlePosition), 3, 22, 22);
    }

    painter.end();
}

