#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    m_thread = new TestThread;

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_thread;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << "start";
    Sleep(5000);
    qDebug() << "stop";

//    for (int i = 0; i < 5; i++) {
//        Sleep(1000);
//        qDebug() << i;
//    }
}

void MainWindow::on_pushButton_2_clicked()
{
    m_thread->startWork1();
}
