#ifndef HOUSE_H
#define HOUSE_H

#include <QObject>

class House : public QObject
{
    Q_OBJECT
public:
    explicit House(QObject *parent = nullptr, const QString &description = "");
    ~House(); // destructor
    void printInfo() const;

private:
    QString _houseDescription;
};

#endif // HOUSE_H
