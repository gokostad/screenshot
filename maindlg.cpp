#include <QDesktopWidget>
#include <QtGui>
#include <QColorDialog>
#include <QClipboard>
#include <QFrame>

#include "maindlg.h"
#include "ui_maindlg.h"
#include "screenshotdlg.h"

MainDlg::MainDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDlg),
    dlgState(capture),
    timer(0)
{
    ui->setupUi(this);

    this->ui->frm1Color->setBackgroundColor(0xff1cae);
    this->ui->frm2Color->setBackgroundColor(0);
    this->ui->frm3Color->setBackgroundColor(0x66CD00);
    this->ui->frm4Color->setBackgroundColor(0xB0171F);
    this->ui->frm5Color->setBackgroundColor(0x00FFFF);
    this->ui->frm1Color->setPressWidget(this->ui->frmCurrentColor);
    this->ui->frm2Color->setPressWidget(this->ui->frmCurrentColor);
    this->ui->frm3Color->setPressWidget(this->ui->frmCurrentColor);
    this->ui->frm4Color->setPressWidget(this->ui->frmCurrentColor);
    this->ui->frm5Color->setPressWidget(this->ui->frmCurrentColor);

    this->ui->frmCurrentColor->setFrameShape(QFrame::NoFrame);
    this->ui->frmCurrentColor->setFrameShadow(QFrame::Raised);

    this->ui->frmCurrentColor->setBackgroundColor(0x00);
    connect(this->ui->frm1Color, SIGNAL(timeout()), this, SLOT(on_Timer()));

    screenShotDlg = new ScreenShotDlg(this);
    screenShotDlg->show();

}

MainDlg::~MainDlg()
{
    if ( screenShotDlg )
        delete screenShotDlg;
    delete ui;
}

void MainDlg::showEvent ( QShowEvent * event )
{
    QDialog::showEvent(event);
    this->ui->grpCapture->show();
    this->ui->grpEdit->hide();
    this->resize(this->ui->grpCapture->width()+20, this->ui->grpCapture->y()+this->ui->grpCapture->height());
    screenShotDlg->move(this->x()-screenShotDlg->size().width()-10, this->y());
}

void MainDlg::changeEvent(QEvent *e)
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

void MainDlg::on_btnCapture_pressed()
{
//    QMessageBox mg;
//    QPoint posMain = this->pos();
//    QPoint posMain1 = screenShotDlg->pos();
//    mg.question(this, "", QString::number(posMain.x()) + " " + QString::number(posMain.y())  + " " + QString::number(posMain1.y()));
    if (dlgState == capture)
    {
        dlgState = wait;
        this->ui->btnCapture->setText("&Reset");
        timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(on_Timer()));
        if ( this->ui->spinBox->value() > 0 )
        {
            timer->start(1000);
        }
        else
            this->on_Timer();
    }
    else
    {
        dlgState = capture;
        if ( timer != 0 )
        {
            timer->stop();
            delete timer;
            timer = 0;
        }
        this->ui->btnCapture->setText("&Capture");
        screenShotDlg->resetScreenShotPic();
        this->ui->grpCapture->show();
        this->ui->grpEdit->hide();
        this->resize(this->ui->grpCapture->width()+20, this->ui->grpCapture->y()+this->ui->grpCapture->height());
    }

}

void MainDlg::on_btnSave_pressed()
{
    QString format = "png";
    QString initialPath = QDir::currentPath() + tr("/untitled.") + format;

    QString fileName = QFileDialog::getSaveFileName(this, tr("Save As"),
                               initialPath,
                               tr("%1 Files (*.%2);;All Files (*)")
                               .arg(format.toUpper())
                               .arg(format));
    if (!fileName.isEmpty())
        screenShotDlg->getScreenShotPic().save(fileName, format.toAscii());
}


void MainDlg::on_btnColorSelector_pressed()
{
    QRgb res = QColorDialog::getRgba();
}

void MainDlg::on_btnClipboard_pressed()
{
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setImage(screenShotDlg->getScreenShotPic().toImage());
}

void MainDlg::on_Timer()
{
    if ( this->ui->spinBox->value() > 0 )
        this->ui->spinBox->setValue(this->ui->spinBox->value()-1);
    if ( this->ui->spinBox->value() == 0 && this->dlgState == wait )
    {
        timer->stop();
        delete timer;
        timer = 0;

        this->dlgState = edit;
        this->ui->btnCapture->setText("&Reset");

        this->resize(534, 383);

//        this->move(posMain.x(), posMain.y());

        QPoint pos = this->ui->grpCapture->pos();
        this->ui->grpCapture->hide();

        this->ui->grpEdit->move(pos.x(), pos.y());
        this->ui->grpEdit->show();

        pos = screenShotDlg->pos();
        QSize size = screenShotDlg->size();
        screenShotDlg->hide();

        screenShotDlg->setScreenShotPic(
                QPixmap::grabWindow(
                        QApplication::desktop()->winId()).copy( screenShotDlg->geometry().x(), screenShotDlg->geometry().y(),
                                /*pos.x(), pos.y(),*/ size.width(), size.height()));


        qgs.addPixmap(screenShotDlg->getScreenShotPic());
        this->ui->graphicsView->setScene(&qgs);
        screenShotDlg->resize(size);
        screenShotDlg->move(pos);
        screenShotDlg->show();

        this->ui->lbl1->setText("Dialog position : " + QString::number(pos.x())+" "+QString::number(pos.y())+ " XXX " + QString::number( screenShotDlg->getScreenShotPic().width() ) + " " + QString::number( screenShotDlg->getScreenShotPic().height() ));
        this->ui->lbl2->setText("Dialog size     : " + QString::number(size.width())+" "+QString::number(size.height()));
        this->ui->lbl3->setText("Label position : "  + QString::number(screenShotDlg->getLabelPosX())+" "+QString::number(screenShotDlg->getLabelPosY()));
        this->ui->lbl4->setText("Label size     : "  + QString::number(screenShotDlg->getLabelWidth())+" "+QString::number(screenShotDlg->getLabelHeight()));

    }
}


