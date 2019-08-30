#ifndef CIRCLEHEAD_H
#define CIRCLEHEAD_H

#include <QtQuick/QQuickPaintedItem>
#include <QColor>

class CircleHead : public QQuickPaintedItem // 为了基于QPainter API实现自定义的绘制效果，我们需要继承这个类。如果不需要使用QPainter API，我们可以继承QQuickItem，甚至如果连可视化也不需要，QObject以及它的子类都可以作为我们继承的对象
{
    Q_OBJECT                              // 因为需要使用到Qt的元对象系统
    Q_PROPERTY(QString source READ source WRITE setSource NOTIFY sourceChanged)

public:
    CircleHead(QQuickItem *parent = nullptr);  // 作为可视化组件我们需要将其父对象设置为QQuickItem
    QString source() const;
    void setSource(const QString &source);

    void paint(QPainter *painter);         // 最后我们重载QQuickPaintedItem的paint函数，实现我们的自定义绘图

signals:
    void sourceChanged();

private:
    QString m_source;
};

#endif
