#include <QMouseEvent>

#include "screenshotdlg.h"
#include "ui_screenshotdlg.h"

ScreenShotDlg::ScreenShotDlg(QWidget *parent) :
        QDialog(parent, Qt::CustomizeWindowHint),
    ui(new Ui::ScreenShotDlg),
    mode(Capture)
{
    ui->setupUi(this);
    this->setWindowOpacity(0.5);
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
    QDialog::resizeEvent(event);
    this->ui->screenshotLabel->resize(this->size());
}

void ScreenShotDlg::setMode(EditMode mode)
{
    this->hide();
    this->mode = mode;
    if ( mode == Capture )
    {
        this->ui->screenshotLabel->setPixmap(0);
        this->setWindowOpacity(0.5);
    }
    else if ( mode == Edit )
    {
        this->ui->screenshotLabel->setPixmap(originalPixmap);
        this->setWindowOpacity(1.0);
    }
    this->ui->screenshotLabel->hide();
    this->ui->screenshotLabel->show();
    this->show();
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
    if(event->button() == Qt::LeftButton)
    {
        mMoving = true;
        mLastMousePosition = event->globalPos();
    }
}

void ScreenShotDlg::mouseMoveEvent(QMouseEvent* event)
{
    if( event->buttons().testFlag(Qt::LeftButton) && mMoving)
    {
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


