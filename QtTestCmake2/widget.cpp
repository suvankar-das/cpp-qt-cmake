#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnSubmit_clicked()
{
    QString firstName = ui->txtFirstName->text();
    QString lastName = ui->txtLastname->text();
    QString dialog = ui->textDialog->toPlainText();
    qDebug() << "First Name: " << firstName;
    qDebug() << "Last Name: " << lastName;
    qDebug() << "Diagolog: " << dialog;
}


void Widget::on_btnClear_clicked()
{
    ui->txtFirstName->clear();
    ui->txtLastname->clear();
    ui->textDialog->clear();
}

