#ifndef TASKSELECTIONWINDOW_H
#define TASKSELECTIONWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <Qt>

namespace Ui {
class taskselectionwindow;
}

class taskselectionwindow : public QMainWindow
{
    Q_OBJECT

signals:
    void firstWindow();

public:
    explicit taskselectionwindow(QWidget *parent = nullptr);
    ~taskselectionwindow();

private:
    Ui::taskselectionwindow *ui;

protected:
    virtual void  keyPressEvent(QKeyEvent *event);
};

#endif // TASKSELECTIONWINDOW_H
