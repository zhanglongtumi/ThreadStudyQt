#ifndef WORKOBJECT_H
#define WORKOBJECT_H

#include <QObject>

class WorkObject : public QObject
{
    Q_OBJECT
public:
    explicit WorkObject(QObject *parent = 0);

    void setOneData(QString data);

signals:
    void returnWorkInfo(QString str);
public slots:
    void doWork(QString cmd);

private:
    QString m_input_str;
};

#endif // WORKOBJECT_H
