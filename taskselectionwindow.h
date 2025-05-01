#ifndef TASKSELECTIONWINDOW_H
#define TASKSELECTIONWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <Qt>
#include <QFile>
#include "intricacyselectionwindow.h"

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
    intricacyselectionwindow* isWindow;

protected:
    virtual void keyPressEvent(QKeyEvent *event);
    void nextWindow();
private slots:
    void on_pushButton_clicked();
};

#endif // TASKSELECTIONWINDOW_H
