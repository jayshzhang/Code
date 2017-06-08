#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString str = "1 2 3 4";
    QStringList strList = str.split(QRegExp("[ ]"));

    ui->comboBox->addItems(strList);

    qDebug() <<QApplication::applicationDirPath();//获取执行文件exe所在的路径,也就是qDebug的路径 : "E:/QT/Build/debug"
    qDebug() << QApplication::applicationFilePath();//获取执行文件exe的位置 : "E:/QT/Build/debug/zyjString.exe"
    qDebug() << QDir::currentPath();// "E:/QT/Build"

}

MainWindow::~MainWindow()
{
    delete ui;
}
