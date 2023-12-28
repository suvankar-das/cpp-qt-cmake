#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QString>

class Person : public QObject {
    Q_OBJECT

public:
    double getWeight() const;
    void setWeight(double weight);

signals:
    // Signal emitted when the person's details change
    void weightChanged(double weight);

private:
    double m_weight;
};

#endif // PERSON_H
