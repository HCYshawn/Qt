#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    myButton = new QPushButton(this);
    connect(myButton,&QPushButton::clicked,this,&Widget::handleClick);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleClick()
{
    if(myButton->text()== QString("hello world"))
        myButton->setText("hello Qt");
    else
        myButton->setText("hello world");
}
