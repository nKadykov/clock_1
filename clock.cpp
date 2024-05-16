#include "clock.h"

Clock::Clock(QWidget* parent) : QMainWindow(parent) {
    m_timer = new QTimer(this);
    m_timer->setInterval(1000);
    m_label = new QLabel;
    QFont font("Times", 28, QFont::Bold);
    m_label->setFont(font);
    m_label->setText(QTime::currentTime().toString("hh:mm:ss"));
    connect(m_timer, SIGNAL(timeout()), this, SLOT(slotUpdateDataTime));
    this->layout()->addWidget(m_label);
    this->setLayout(this->layout());
}

Clock::~Clock() {
    delete m_timer;
    delete m_display;
}

void Clock::slotUpdateDateTime() {
    m_label->setText(QTime::currentTime().toString("hh:mm:ss"));
}
