/********************************************************************************
** Form generated from reading UI file 'screenshotdlg.ui'
**
** Created: Fri 5. Mar 17:33:47 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOTDLG_H
#define UI_SCREENSHOTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ScreenShotDlg
{
public:
    QLabel *screenshotLabel;

    void setupUi(QDialog *ScreenShotDlg)
    {
        if (ScreenShotDlg->objectName().isEmpty())
            ScreenShotDlg->setObjectName(QString::fromUtf8("ScreenShotDlg"));
        ScreenShotDlg->resize(182, 139);
        ScreenShotDlg->setMinimumSize(QSize(100, 100));
        screenshotLabel = new QLabel(ScreenShotDlg);
        screenshotLabel->setObjectName(QString::fromUtf8("screenshotLabel"));
        screenshotLabel->setGeometry(QRect(0, 0, 100, 100));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(screenshotLabel->sizePolicy().hasHeightForWidth());
        screenshotLabel->setSizePolicy(sizePolicy);
        screenshotLabel->setMinimumSize(QSize(100, 100));
        screenshotLabel->setAutoFillBackground(true);
        screenshotLabel->setFrameShape(QFrame::NoFrame);
        screenshotLabel->setLineWidth(0);
        screenshotLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(ScreenShotDlg);

        QMetaObject::connectSlotsByName(ScreenShotDlg);
    } // setupUi

    void retranslateUi(QDialog *ScreenShotDlg)
    {
        ScreenShotDlg->setWindowTitle(QApplication::translate("ScreenShotDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        screenshotLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ScreenShotDlg: public Ui_ScreenShotDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOTDLG_H
