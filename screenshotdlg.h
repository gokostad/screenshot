#ifndef SCREENSHOTDLG_H
#define SCREENSHOTDLG_H

#include <QDialog>
#include <QPixmap>

namespace Ui {
    class ScreenShotDlg;
}

class ScreenShotDlg : public QDialog {
    Q_OBJECT
public:
    ScreenShotDlg(QWidget *parent = 0);
    ~ScreenShotDlg();

    void setScreenShotPic(QPixmap pic);
    const QPixmap& getScreenShotPic() { return originalPixmap; };

    void resetScreenShotPic();

    int getWidth();
    int getHeight();
    int getPosX();
    int getPosY();

    int getLabelWidth();
    int getLabelHeight();
    int getLabelPosX();
    int getLabelPosY();

protected:
    void changeEvent(QEvent *e);
    QPixmap originalPixmap;

private:
    Ui::ScreenShotDlg *ui;

protected:
    void resizeEvent ( QResizeEvent * );

    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);

private:
    QPoint mLastMousePosition;
    bool mMoving;
};

#endif // SCREENSHOTDLG_H
