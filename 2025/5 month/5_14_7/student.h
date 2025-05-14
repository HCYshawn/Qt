#ifndef STUDENT_H
#define STUDENT_H

#include<QObject>
#include<QDebug>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);
public slots:
    void leaveSchool();
};

#endif // STUDENT_H
