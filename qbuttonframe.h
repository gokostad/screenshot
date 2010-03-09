#ifndef QBUTTONFRAME_H
#define QBUTTONFRAME_H

#include <QFrame>

class QButtonFrame : public QFrame
{
    Q_OBJECT
public:
    QButtonFrame();
    QButtonFrame(QWidget *wdg) :
            QFrame(wdg)
    {
        setDefaultAttributes();
    }

    void setBackgroundColor(QColor &col);
    void setBackgroundColor(int);

    void setPressWidget(QWidget *widget)
    {
        pressWidget = widget;
    }
    QWidget* getPressWidget() const
    {
        return pressWidget;
    }


private:
    QWidget *pressWidget;

protected:
    virtual void mousePressEvent ( QMouseEvent * event );
    virtual void setDefaultAttributes()
    {
        setFrameShape(WinPanel);
        setFrameShadow(Raised);
    }

};

#endif // QBUTTONFRAME_H
