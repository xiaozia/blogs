#include "textballoon.h"

TextBalloon::TextBalloon(QQuickItem *parent)
    : QQuickPaintedItem(parent)
    , rightAligned(false)
{
}

void TextBalloon::paint(QPainter *painter)
{
    QBrush brush(QColor("#007430"));

    painter->setBrush(brush);
    painter->setPen(Qt::NoPen);
    painter->setRenderHint(QPainter::Antialiasing);

    QSizeF itemSize = size();
    painter->drawRoundedRect(0, 0, static_cast<int>(itemSize.width()), static_cast<int>(itemSize.height() - 10), 10, 10);

    if (rightAligned)
    {
        const QPointF points[3] = {
            QPointF(itemSize.width() - 10.0, itemSize.height() - 10.0),
            QPointF(itemSize.width() - 20.0, itemSize.height()),
            QPointF(itemSize.width() - 30.0, itemSize.height() - 10.0),
        };
        painter->drawConvexPolygon(points, 3);
    }
    else
    {
        const QPointF points[3] = {
            QPointF(10.0, itemSize.height() - 10.0),
            QPointF(20.0, itemSize.height()),
            QPointF(30.0, itemSize.height() - 10.0),
        };
        painter->drawConvexPolygon(points, 3);
    }
}

bool TextBalloon::isRightAligned()
{
    return this->rightAligned;
}

void TextBalloon::setRightAligned(bool rightAligned)
{
    this->rightAligned = rightAligned;
}
