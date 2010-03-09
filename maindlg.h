#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>
#include <QGraphicsScene>

class ScreenShotDlg;

namespace Ui {
    class MainDlg;
}


class MainDlg : public QDialog {
    Q_OBJECT
public:
    MainDlg(QWidget *parent = 0);
    ~MainDlg();

    enum DlgState { capture, wait, edit };
    virtual void showEvent ( QShowEvent * event );

protected:
    void changeEvent(QEvent *e);
    QGraphicsScene qgs;

    DlgState dlgState;

private:
    Ui::MainDlg *ui;
    ScreenShotDlg *screenShotDlg;
    QTimer *timer;

private slots:
    void on_btnClipboard_pressed();
    void on_btnColorSelector_pressed();
    void on_btnSave_pressed();
    void on_btnCapture_pressed();

    void on_Timer();
};

#endif // MAINDLG_H
