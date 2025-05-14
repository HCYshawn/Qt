#include "student.h"

Student::Student(QObject* parent):QObject(parent) {}

void Student::leaveSchool()
{
    qDebug()<<"student: It's over of school!";
}
