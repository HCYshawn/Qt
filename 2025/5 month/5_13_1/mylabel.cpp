#include "mylabel.h"

#include<QDebug>

Mylabel::Mylabel(QWidget* parent):QLabel(parent)
{

}

Mylabel::~Mylabel()
{
    qDebug()<<"Mylabel 被销毁！";
}
