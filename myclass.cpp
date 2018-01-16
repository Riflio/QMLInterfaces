#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
    m_myProperty= "my property value";
}

QString MyClass::myProperty() const
{
    return m_myProperty;
}

void MyClass::setMyProperty(QString myProperty)
{
    if (m_myProperty == myProperty)
        return;

    m_myProperty = myProperty;
    emit myPropertyChanged(m_myProperty);
}
