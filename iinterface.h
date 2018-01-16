#ifndef IINTERFACE_H
#define IINTERFACE_H

#include <QObject>


class IInterface {
public:
    virtual QString myProperty() const =0;
    virtual void setMyProperty(QString myProperty) =0;
    virtual void myPropertyChanged(QString myProperty) =0;
};

Q_DECLARE_INTERFACE(IInterface, "pavelk.iinterface")


#endif // IINTERFACE_H
