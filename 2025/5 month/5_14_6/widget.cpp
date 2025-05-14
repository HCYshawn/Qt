#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton* quitBtn = new QPushButton("close Window",this);
    quitBtn->move(100,100);
    connect(quitBtn,&QPushButton::clicked,this,&Widget::close);
}

Widget::~Widget()
{
    delete ui;
}
