#include <QMouseEvent>

#include "screenshotdlg.h"
#include "ui_screenshotdlg.h"


#include "maindlg.h"
#include "ui_maindlg.h"

ScreenShotDlg::ScreenShotDlg(QWidget *parent) :
        QDialog(parent, Qt::CustomizeWindowHint),
    ui(new Ui::ScreenShotDlg),
    mode(Capture),
    resizing(false)
{
    ui->setupUi(this);
    QPalette palette = this->palette();
    palette.setColor( backgroundRole(), 0x80 );
    this->setPalette( palette );
    this->setAutoFillBackground( true );
    this->setWindowOpacity(0.1);
}

ScreenShotDlg::~ScreenShotDlg()
{
    delete ui;
}

void ScreenShotDlg::setScreenShotPic(QPixmap pic)
{
    originalPixmap = pic;
    setMode(Edit);
}

void ScreenShotDlg::resizeEvent ( QResizeEvent * event)
{
    if ( !resizing )
    {
        QDialog::resizeEvent(event);
            this->ui->screenshotLabel->resize(this->size());
        if ( mode == Capture )
        {
        }
        else if ( mode == Edit )
        {
         //   this->ui->screenshotLabel->resize(this->size().width()-20, this->size().height()-30);
        }
    }
}

void ScreenShotDlg::setMode(EditMode mode)
{
    resizing = true;
    this->hide();
    this->mode = mode;

    QPalette palette = this->palette();
    if ( mode == Capture )
    {
        // this->resize(this->ui->screenshotLabel->size().width(), this->ui->screenshotLabel->height());
        this->ui->screenshotLabel->move(0, 0);
        this->ui->screenshotLabel->setPixmap(0);
        this->setWindowOpacity(0.1);
        palette.setColor( backgroundRole(), 0x80 );
    }
    else if ( mode == Edit )
    {
        // this->ui->screenshotLabel->move(10, 10);
        // this->resize(this->ui->screenshotLabel->size().width()+20, this->ui->screenshotLabel->size().height()+30);
        this->ui->screenshotLabel->setPixmap(originalPixmap);
        this->setWindowOpacity(1.0);
        palette.setColor( backgroundRole(), 0xffffff );
    }
    this->setPalette( palette );
    this->setAutoFillBackground( true );
    this->ui->screenshotLabel->hide();
    this->ui->screenshotLabel->show();
    this->show();
    resizing = false;
}

int ScreenShotDlg::getWidth()
{
    return this->width();
}

int ScreenShotDlg::getHeight()
{
    return this->height();
}

int ScreenShotDlg::getPosX()
{
    return this->x();
}

int ScreenShotDlg::getPosY()
{
    return this->y();
}



int ScreenShotDlg::getLabelWidth()
{
    return this->ui->screenshotLabel->width();
}

int ScreenShotDlg::getLabelHeight()
{
    return this->ui->screenshotLabel->height();
}

int ScreenShotDlg::getLabelPosX()
{
    return this->ui->screenshotLabel->x();
}

int ScreenShotDlg::getLabelPosY()
{
    return this->ui->screenshotLabel->y();
}



void ScreenShotDlg::mousePressEvent(QMouseEvent* event)
{
    if( event->button() == Qt::LeftButton )
    {
//        QRect r = this->ui->screenshotLabel->contentsRect();
//        r.moveTo(this->ui->screenshotLabel->pos());
//        if ( mode == Capture || !r.contains(event->pos().x(), event->pos().y()) )
        {
            mMoving = true;
            mLastMousePosition = event->globalPos();
        }
    }
}

void ScreenShotDlg::mouseMoveEvent(QMouseEvent* event)
{
    if( event->buttons().testFlag(Qt::LeftButton) && mMoving)
    {
//        QRect r = this->ui->screenshotLabel->contentsRect().moveTo(this->ui->screenshotLabel->pos());
//        ((MainDlg*)this->parent())->ui->lbl4->setText( QString::number( event->pos().x() ) + " " + QString::number( event->pos().y() )
  //                                                     + " " + QString::number( r.x() )+ " " + QString::number( r.y() )
    //                                                   + " " + QString::number( r.width() )+ " " + QString::number( r.height() )
      //                                                 );

        this->move(this->pos() + (event->globalPos() - mLastMousePosition));
        mLastMousePosition = event->globalPos();
    }
}

void ScreenShotDlg::mouseReleaseEvent(QMouseEvent* event)
{
    if(event->button() == Qt::LeftButton)
    {
        mouseMoveEvent(event);
        mMoving = false;
    }
}


void ScreenShotDlg::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}


