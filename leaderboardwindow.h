#ifndef LEADERBOARDWINDOW_H
#define LEADERBOARDWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <Qt>

namespace Ui {
class leaderboardwindow;
}

class leaderboardwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit leaderboardwindow(QWidget *parent = nullptr);
    ~leaderboardwindow();

signals:
    void firstWindow();

private:
    Ui::leaderboardwindow *ui;

protected:
    virtual void  keyPressEvent(QKeyEvent *event);
};

#endif // LEADERBOARDWINDOW_H
