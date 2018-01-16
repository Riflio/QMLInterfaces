#include <QGuiApplication>
#include <QQmlApplicationEngine>


/**
* Пример того, как можно работать через интерфейс класса в QML
*
*/

#include "myclass.h"

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    MyClass * myClass = new MyClass(0);

    IInterface * interface = myClass;

    engine.rootObjects().at(0)->setProperty("myClassInterface", qVariantFromValue( dynamic_cast<QObject*>(interface) ));


    return app.exec();
}
