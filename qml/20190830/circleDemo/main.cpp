#include <QtQuick/QQuickView>
#include <QGuiApplication>
#include "circleHead.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<CircleHead>("CircleHead", 1, 0, "CircleHead"); // 我们使用模板函数注册了这个类型，"Charts"为import的命名空间，PieChart为类型名，1,0即是版本号1.0。

    QQuickView view;                                  // 然后创建一个QQuickView来显示QML组件
    view.setResizeMode(QQuickView::SizeRootObjectToView);      // 窗口大小设置为根目录大小
    view.setSource(QUrl("qrc:///main.qml"));                    // 调用资源中的app.qml
    view.show();
    return app.exec();
}
