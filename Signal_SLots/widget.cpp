#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // We can use the string notation to connect things up and we will set up all connections..

    /*
     * String Notation
      connect: This function is used in Qt to establish a connection between a signal emitted by an object and a slot in another object.
     ui->myButton: This refers to a pointer to the myButton widget in the user interface.
         ui is typically a pointer to the auto-generated UI class object in Qt Creator, and myButton is the name given to a button widget in the UI.

     SIGNAL(clicked()): This part specifies the signal that triggers the connection. In this case, it connects to the clicked()
                        signal emitted by the myButton widget. The clicked() signal is emitted when the button is clicked.

    this: Refers to the current object (often a QObject-derived class) where the slot function (change_text()) is located.
           It's typically used when connecting signals and slots within the same class.

    SLOT(change_text()): Specifies the slot function that will be executed when the signal is emitted.
                         change_text() is the slot function that will be called in response to the clicked() signal from myButton

   */
    connect(ui->myButton,SIGNAL(clicked()),this,SLOT(change_text()));


    // Functor notation with regular slots

    /*
     * This line of code in Qt establishes a connection between the clicked signal of a QPushButton named btn2
     *  and a slot function change_text2 within an instance of the class Widget, utilizing the new syntax
     *   for signal-slot connections introduced in Qt 5.
     */

    connect(ui->btn2,&QPushButton::clicked,this,&Widget::change_text2);


    // Functor notation with lambda
    /*This line of code sets up a connection using the Qt connect function,
     * linking the clicked signal of a QPushButton named btn3 to a lambda function that,
     * when triggered by the button click, calls the change_text3() member function of
     *  the current object (this).
     */

    connect(ui->btn3,&QPushButton::clicked,[=](){
        this->change_text3();
    });

}

Widget::~Widget()
{
    delete ui;
}

// Nothing going to work , unless I connect
void Widget::change_text()
{
    ui->myLabel->setText("hello , Changed using String notation");
}

void Widget::change_text2()
{
    ui->myLabel->setText("hello , Changed using functor and regular");
}

void Widget::change_text3()
{
  ui->myLabel->setText("hello , Changed using functor and lambda");
}
