#include "workobject.h"
#include <QDebug>
#include <windows.h>

WorkObject::WorkObject(QObject *parent) : QObject(parent)
{

}

void WorkObject::setOneData(QString data)
{
    m_input_str = data;
}

void WorkObject::doWork(QString cmd)
{
    qDebug() << "work thread do:" << cmd;
    qDebug() << "input_str:" << m_input_str;
    Sleep(5000);
    emit returnWorkInfo("ok");
}
