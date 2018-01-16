#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

#include "iinterface.h"

class MyClass : public QObject, public IInterface
{
    Q_OBJECT
    Q_INTERFACES(IInterface)
    Q_PROPERTY(QString myProperty READ myProperty WRITE setMyProperty NOTIFY myPropertyChanged)
public:
    explicit MyClass(QObject *parent = nullptr);

    QString myProperty() const;

signals:
    void myPropertyChanged(QString myProperty);

public slots:
    void setMyProperty(QString myProperty);

private:
    QString m_myProperty;
};

#endif // MYCLASS_H
