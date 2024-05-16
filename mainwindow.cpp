#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFont font("Times", 28, QFont::Bold);
    ui->label->setFont(font);
    ui->label->setText(QTime::currentTime().toString("hh:mm:ss"));
    m_timer = new QTimer();
    connect(m_timer, SIGNAL(timeout()), this, SLOT(slotTimerAlarm()));
    m_timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotTimerAlarm()
{
    ui->label->setText(QTime::currentTime().toString("hh:mm:ss"));
}
