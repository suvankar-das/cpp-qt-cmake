#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

//If you want, you can make your slots public and they are going to be accessible from the outside.
private slots:
    void change_text();
    void change_text2();
    void change_text3();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
