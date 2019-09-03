#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    mainWindow = nullptr;
    //固定界面大小
    this->setFixedSize(440, 260);

    //创建主界面
    mainWindow = new MainWindow;
    //当主界面对象发出信号时，自动执行show函数
    connect(mainWindow, SIGNAL(sigShowLogin()), this, SLOT(show()));
}

LoginDialog::~LoginDialog()
{
    delete mainWindow;
    delete ui;
}

void LoginDialog::clear()
{
    ui->edit_pwd->clear();
    ui->edit_user->clear();
}

//退出按钮功能
void LoginDialog::on_btn_exit_clicked()
{
    this->close();
}

//登录按钮的功能
void LoginDialog::on_btn_login_clicked()
{
    //获取用户输入的信息
    QString user = ui->edit_user->text();
    QString pwd = ui->edit_pwd->text();
    //判断
    if (user != "zhangfei" || pwd != "123")
    {
        //如果出错，给出错误提示
        //使用QT内置的消息对话框，弹出错误提示
//        QMessageBox msgBox;
//        msgBox.setText("用户名或密码错误！.");
//        msgBox.exec();

        QMessageBox::critical(this, "错误提示", "用户名或密码错误！");
        return;
    }

    //如果正确，隐藏登录界面，显示新的界面
    this->clear();
    this->hide();

    mainWindow->show();
}






