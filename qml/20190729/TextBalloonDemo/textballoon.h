#ifndef TEXTBALLOON_H
#define TEXTBALLOON_H

#include <QtQuick>

class TextBalloon : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(bool rightAligned READ isRightAligned WRITE setRightAligned NOTIFY rightAlignedChanged)

    public:
        TextBalloon(QQuickItem *parent = nullptr);
        void paint(QPainter *painter);

        bool isRightAligned();
        void setRightAligned(bool rightAligned);

    private:
        bool rightAligned;

    signals:
        void rightAlignedChanged();
};

#endif
