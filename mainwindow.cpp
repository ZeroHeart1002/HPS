#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//主界面中的返回按钮
void MainWindow::on_btn_return_clicked()
{
    //关闭主界面
    this->close();
    //发信号通知登录界面自动显示
    emit sigShowLogin();
}
