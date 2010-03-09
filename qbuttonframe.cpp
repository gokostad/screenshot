#include "qbuttonframe.h"

QButtonFrame::QButtonFrame()
{
    setDefaultAttributes();
}

void QButtonFrame::setBackgroundColor(QColor &col)
{
    QPalette palette = this->palette();
    palette.setColor( backgroundRole(), col );
    this->setPalette( palette );
    this->setAutoFillBackground( true );
}

void QButtonFrame::setBackgroundColor(int col)
{
    QPalette palette = this->palette();
    palette.setColor( backgroundRole(), col );
    this->setPalette( palette );
    this->setAutoFillBackground( true );
}

void QButtonFrame::mousePressEvent ( QMouseEvent * event )
{
    if ( pressWidget )
    {
        QPalette palette = this->palette();
        palette.setColor( backgroundRole(), this->palette().color(backgroundRole()) );
        pressWidget->setPalette( palette );
        pressWidget->setAutoFillBackground( true );
    }
}
