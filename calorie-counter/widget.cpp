#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // initialize member from values from ui
    m_person.setWeight(ui->spBoxWeight->value());
    m_time = ui->spBoxTime->value();
    m_speed = ui->spBoxSpeed->value();

    // connect to Ui components with respective slots
    connect(ui->spBoxWeight,&QDoubleSpinBox::valueChanged,this,&Widget::weight_changed);
    connect(ui->spBoxTime,&QDoubleSpinBox::valueChanged,this,&Widget::time_changed);
    connect(ui->spBoxSpeed,&QDoubleSpinBox::valueChanged,this,&Widget::speed_changed);


    // update calorie count
    connect(this,&Widget::calorie_count_changed,[=](){
        ui->lblCalorie->setText(QString::number(m_calory_count));
    });

    calculate_calories();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::calculate_calories()
{
    m_calory_count = ((0.0215 * (m_speed * m_speed * m_speed))-(0.1765 * (m_speed * m_speed))+
                      (0.8710*m_speed)+1.4577) * m_person.getWeight()*m_time;

    emit calorie_count_changed();
}

void Widget::weight_changed(double weight)
{
    m_person.setWeight(weight);
    calculate_calories();
}

void Widget::time_changed(double time)
{
    m_time = time;
    calculate_calories();
}

void Widget::speed_changed(double speed)
{
    m_speed = speed;
    calculate_calories();
}
