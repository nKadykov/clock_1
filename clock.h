#ifndef CLOCK_H
#define CLOCK_H

#include <QMainWindow>
#include <QFont>
#include <QTime>
#include <QTimer>
#include <QLayout>
#include <QLabel>
#include <QLineEdit>

class Clock : public QMainWindow
{
    Q_OBJECT
public:
    explicit Clock(QWidget* parent = 0);
    ~Clock();
public slots:
    void slotUpdateDateTime();
private:
    QTimer *m_timer;
    QLineEdit *m_display;
    QLabel *m_label;
};

#endif // CLOCK_H
