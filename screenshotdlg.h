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
    enum EditMode { Capture, Edit };

    ScreenShotDlg(QWidget *parent = 0);
    ~ScreenShotDlg();

    void setScreenShotPic(QPixmap pic);
    const QPixmap& getScreenShotPic() { return originalPixmap; };

    void setMode(EditMode mode);

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
    EditMode mode;

protected:
    void resizeEvent ( QResizeEvent * );

    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);

private:
    QPoint mLastMousePosition;
    bool mMoving;
    bool resizing;
};

#endif // SCREENSHOTDLG_H
