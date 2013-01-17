#include "mapa.h"

void Enviroment::initMapa(){
    gridSpace = 10;
    grid = QPixmap(gridSpace, gridSpace);
    grid.fill(Qt::white);
    QPainter gridPainter(&grid);
    gridPainter.drawPoint(0,0);
    gridPainter.drawPoint(gridSpace, gridSpace);

    setItemIndexMethod(NoIndex);

}

Enviroment::Enviroment() : QGraphicsScene()
{
    initMapa();
}

void Enviroment::drawBackground(QPainter *painter, const QRectF &rect)
{
    //    painter->save();

    QRectF r(rect);
    r.setTopLeft(QPointF(trunkedValue(rect.x(), gridSpace), trunkedValue(rect.y(), gridSpace)));
    painter->drawTiledPixmap(r, grid);

    painter->drawLine(-20,0, 20, 0);
    painter->drawLine(0,-20,0,20);

    //    painter->restore();

}

void Enviroment::dragEnterEvent(QGraphicsSceneDragDropEvent *e)
{
    if(e->mimeData()->hasFormat("text/plain")){
        e->acceptProposedAction();
    }
}
