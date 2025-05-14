#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_teacher = new Teacher(this);  // 创建老师对象
    m_student = new Student(this);  // 创建学生对象

    // 连接信号与槽
    connect(m_teacher, &Teacher::classOver,m_student, &Student::leaveSchool);
    // 触发下课信号（模拟场景）
    emit m_teacher->classOver();  // 发送信号
}

Widget::~Widget()
{
    delete ui;
}
