#ifndef TESTTHREAD_H
#define TESTTHREAD_H

#include <QObject>
#include <QThread>
#include "workobject.h"

class TestThread : public QObject
{
    Q_OBJECT
public:
    explicit TestThread(QObject *parent = 0);
    ~TestThread();

    void startWork1();

signals:
    void sendThread(QString cmd);
public slots:
    void threadToThis(QString str);


private:
    QThread *m_work_thread;

    WorkObject *m_work_object;
};

#endif // TESTTHREAD_H
