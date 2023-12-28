#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // // String notation
    // connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
    //         ui->progressBar,SLOT(setValue(int))
    //         );

    // // get slider value
    // connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
    //         this,SLOT(Respond(int)));


    // // Functor notation with regular slots

    // connect(ui->horizontalSlider,&QSlider::valueChanged,ui->progressBar,&QProgressBar::setValue);
    // connect(ui->horizontalSlider,&QSlider::valueChanged,this,&Widget::Respond);


    // Functor notation with labda
    connect(ui->horizontalSlider,QSlider::valueChanged,[=](){
        ui->progressBar->setValue(ui->horizontalSlider->value());
        this->Respond(ui->horizontalSlider->value());
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::Respond(int value)
{
    qDebug() <<"value Now: "<< value;
}
