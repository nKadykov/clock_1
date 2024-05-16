#include "clock.h"

Clock::Clock(QWidget* pwgt) : QLabel(pwgt) {
    QTimer* ptimer = new QTimer(this);
    connect(ptimer, SIGNAL(timeout()), SLOT(slotUpdateDataTime));
    ptimer->start(500);
    slotUpdateDateTime();
}

void Clock::slotUpdateDateTime() {
    QString str = QDateTime::currentDateTime().toString();
    setText("<H2><Center>" + str + "</CENTER></H2>");
}
