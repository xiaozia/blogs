#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include "textballoon.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<TextBalloon>("TextBalloonPlugin", 1, 0, "TextBalloon");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
