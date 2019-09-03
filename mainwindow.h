#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots://槽函数
    void on_btn_return_clicked();

signals: //信号函数
    void sigShowLogin();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
