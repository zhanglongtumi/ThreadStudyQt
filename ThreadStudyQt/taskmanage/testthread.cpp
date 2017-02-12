#include "testthread.h"
#include <QDebug>

TestThread::TestThread(QObject *parent) : QObject(parent)
{
    m_work_thread = new QThread;
    m_work_object = new WorkObject;

    m_work_object->moveToThread(m_work_thread);

    connect(m_work_thread, SIGNAL(finished()), m_work_object, SLOT(deleteLater()));
    connect(this, SIGNAL(sendThread(QString)), m_work_object, SLOT(doWork(QString)));
    connect(m_work_object, SIGNAL(returnWorkInfo(QString)), this, SLOT(threadToThis(QString)));

    m_work_thread->start();
}

TestThread::~TestThread()
{
    m_work_thread->quit();
    m_work_thread->wait();
}

void TestThread::startWork1()
{
    m_work_object->setOneData("下发参数");
    emit sendThread("开始了");
    qDebug() << "下发命令";
}

void TestThread::threadToThis(QString str)
{
    qDebug() << str;
}
