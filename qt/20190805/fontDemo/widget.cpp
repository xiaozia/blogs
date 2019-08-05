#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QFont font0("PingFang SC Regular");
    font0.setPixelSize(14);
    ui->label_0->setFont(font0);

    QFont font1("PingFang SC Medium");
    font1.setPixelSize(14);
    ui->label_1->setFont(font1);

    QFont font2("PingFang SC Bold");
    font2.setPixelSize(14);
    ui->label_2->setFont(font2);

    QFont font3("微软雅黑");
    font3.setPixelSize(14);
    ui->label_3->setFont(font3);

    QFont font4("微软雅黑");
    font4.setBold(true);
    font4.setPixelSize(14);
    ui->label_4->setFont(font4);

//    strFont0 is:  "PingFang SC Regular"
//    strFont0 is:  "PingFang SC Medium"
//    strFont0 is:  "PingFang SC Bold"

//    ui->label_0->setFont(font);
}

Widget::~Widget()
{
    delete ui;
}
