/********************************************************************************
** Form generated from reading UI file 'maindlg.ui'
**
** Created: Tue Mar 9 18:36:37 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDLG_H
#define UI_MAINDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "qbuttonframe.h"

QT_BEGIN_NAMESPACE

class Ui_MainDlg
{
public:
    QPushButton *btnCapture;
    QLabel *lbl1;
    QLabel *lbl2;
    QLabel *lbl3;
    QLabel *lbl4;
    QGraphicsView *graphicsView;
    QWidget *grpCapture;
    QLabel *lblSec_2;
    QLabel *lblSec;
    QFrame *line;
    QSpinBox *spinBox;
    QWidget *grpEdit;
    QLabel *label_2;
    QPushButton *btnClipboard;
    QFrame *line_5;
    QPushButton *btnSave;
    QFrame *line_2;
    QFrame *line_4;
    QPushButton *btnEnhancment;
    QLabel *label;
    QFrame *line_3;
    QPushButton *btnUndo;
    QPushButton *pushButton_2;
    QFrame *line_6;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnColorSelector;
    QHBoxLayout *horizontalLayout;
    QButtonFrame *frm1Color;
    QButtonFrame *frm2Color;
    QButtonFrame *frm3Color;
    QButtonFrame *frm4Color;
    QButtonFrame *frm5Color;
    QButtonFrame *frmCurrentColor;
    QPushButton *btnDeleteMe;

    void setupUi(QDialog *MainDlg)
    {
        if (MainDlg->objectName().isEmpty())
            MainDlg->setObjectName(QString::fromUtf8("MainDlg"));
        MainDlg->resize(534, 471);
        btnCapture = new QPushButton(MainDlg);
        btnCapture->setObjectName(QString::fromUtf8("btnCapture"));
        btnCapture->setGeometry(QRect(10, 5, 134, 31));
        lbl1 = new QLabel(MainDlg);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(156, 6, 371, 16));
        lbl2 = new QLabel(MainDlg);
        lbl2->setObjectName(QString::fromUtf8("lbl2"));
        lbl2->setGeometry(QRect(156, 36, 361, 16));
        lbl3 = new QLabel(MainDlg);
        lbl3->setObjectName(QString::fromUtf8("lbl3"));
        lbl3->setGeometry(QRect(156, 66, 351, 16));
        lbl4 = new QLabel(MainDlg);
        lbl4->setObjectName(QString::fromUtf8("lbl4"));
        lbl4->setGeometry(QRect(156, 96, 351, 16));
        graphicsView = new QGraphicsView(MainDlg);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(160, 146, 353, 241));
        grpCapture = new QWidget(MainDlg);
        grpCapture->setObjectName(QString::fromUtf8("grpCapture"));
        grpCapture->setGeometry(QRect(8, 35, 135, 47));
        lblSec_2 = new QLabel(grpCapture);
        lblSec_2->setObjectName(QString::fromUtf8("lblSec_2"));
        lblSec_2->setGeometry(QRect(0, 27, 31, 16));
        lblSec = new QLabel(grpCapture);
        lblSec->setObjectName(QString::fromUtf8("lblSec"));
        lblSec->setGeometry(QRect(70, 27, 58, 16));
        line = new QFrame(grpCapture);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 7, 133, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        spinBox = new QSpinBox(grpCapture);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(23, 22, 42, 22));
        grpEdit = new QWidget(MainDlg);
        grpEdit->setObjectName(QString::fromUtf8("grpEdit"));
        grpEdit->setGeometry(QRect(8, 82, 137, 379));
        label_2 = new QLabel(grpEdit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(4, 205, 111, 16));
        btnClipboard = new QPushButton(grpEdit);
        btnClipboard->setObjectName(QString::fromUtf8("btnClipboard"));
        btnClipboard->setGeometry(QRect(21, 286, 75, 23));
        line_5 = new QFrame(grpEdit);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(4, 195, 129, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        btnSave = new QPushButton(grpEdit);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(21, 256, 75, 23));
        line_2 = new QFrame(grpEdit);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(4, 245, 129, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(grpEdit);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(4, 130, 131, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        btnEnhancment = new QPushButton(grpEdit);
        btnEnhancment->setObjectName(QString::fromUtf8("btnEnhancment"));
        btnEnhancment->setGeometry(QRect(21, 316, 75, 23));
        label = new QLabel(grpEdit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(4, 47, 111, 16));
        line_3 = new QFrame(grpEdit);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(2, 37, 131, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        btnUndo = new QPushButton(grpEdit);
        btnUndo->setObjectName(QString::fromUtf8("btnUndo"));
        btnUndo->setGeometry(QRect(2, 17, 61, 23));
        pushButton_2 = new QPushButton(grpEdit);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(68, 17, 59, 23));
        line_6 = new QFrame(grpEdit);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(2, 5, 133, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget = new QWidget(grpEdit);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(2, 149, 131, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnColorSelector = new QPushButton(gridLayoutWidget);
        btnColorSelector->setObjectName(QString::fromUtf8("btnColorSelector"));

        gridLayout->addWidget(btnColorSelector, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frm1Color = new QButtonFrame(gridLayoutWidget);
        frm1Color->setObjectName(QString::fromUtf8("frm1Color"));
        frm1Color->setAutoFillBackground(false);

        horizontalLayout->addWidget(frm1Color);

        frm2Color = new QButtonFrame(gridLayoutWidget);
        frm2Color->setObjectName(QString::fromUtf8("frm2Color"));

        horizontalLayout->addWidget(frm2Color);

        frm3Color = new QButtonFrame(gridLayoutWidget);
        frm3Color->setObjectName(QString::fromUtf8("frm3Color"));

        horizontalLayout->addWidget(frm3Color);

        frm4Color = new QButtonFrame(gridLayoutWidget);
        frm4Color->setObjectName(QString::fromUtf8("frm4Color"));

        horizontalLayout->addWidget(frm4Color);

        frm5Color = new QButtonFrame(gridLayoutWidget);
        frm5Color->setObjectName(QString::fromUtf8("frm5Color"));

        horizontalLayout->addWidget(frm5Color);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        frmCurrentColor = new QButtonFrame(grpEdit);
        frmCurrentColor->setObjectName(QString::fromUtf8("frmCurrentColor"));
        frmCurrentColor->setGeometry(QRect(6, 142, 125, 5));
        frmCurrentColor->setAutoFillBackground(false);
        btnDeleteMe = new QPushButton(MainDlg);
        btnDeleteMe->setObjectName(QString::fromUtf8("btnDeleteMe"));
        btnDeleteMe->setGeometry(QRect(150, 60, 75, 23));

        retranslateUi(MainDlg);

        QMetaObject::connectSlotsByName(MainDlg);
    } // setupUi

    void retranslateUi(QDialog *MainDlg)
    {
        MainDlg->setWindowTitle(QApplication::translate("MainDlg", "Capture Tool", 0, QApplication::UnicodeUTF8));
        btnCapture->setText(QApplication::translate("MainDlg", "&Capture", 0, QApplication::UnicodeUTF8));
        lbl1->setText(QApplication::translate("MainDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        lbl2->setText(QApplication::translate("MainDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        lbl3->setText(QApplication::translate("MainDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        lbl4->setText(QApplication::translate("MainDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        lblSec_2->setText(QApplication::translate("MainDlg", "with", 0, QApplication::UnicodeUTF8));
        lblSec->setText(QApplication::translate("MainDlg", "sec. delay", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainDlg", "Components:", 0, QApplication::UnicodeUTF8));
        btnClipboard->setText(QApplication::translate("MainDlg", "C&lipboard", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("MainDlg", "&Save", 0, QApplication::UnicodeUTF8));
        btnEnhancment->setText(QApplication::translate("MainDlg", "&Enhancment", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainDlg", "Drawing Tools:", 0, QApplication::UnicodeUTF8));
        btnUndo->setText(QApplication::translate("MainDlg", "&Undo", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainDlg", "&Redo", 0, QApplication::UnicodeUTF8));
        btnColorSelector->setText(QApplication::translate("MainDlg", "C&olor", 0, QApplication::UnicodeUTF8));
        btnDeleteMe->setText(QApplication::translate("MainDlg", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainDlg: public Ui_MainDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDLG_H
