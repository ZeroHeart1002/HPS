#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

    void clear();
private slots:
    void on_btn_exit_clicked();

    void on_btn_login_clicked();

private:
    Ui::LoginDialog *ui;
    MainWindow *mainWindow;
};

#endif // LOGINDIALOG_H
