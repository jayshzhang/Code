#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QComboBox>
#include <QSignalMapper>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList header;
    header << "first" << "second" << "third";
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(4);
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft|Qt::AlignVCenter);
    ui->tableWidget->horizontalHeader()->setVisible(true);

    //放进去多个combobox
    for(int i = 0; i < 3; i++ )
    {
        QStringList newStr;
        newStr << "cbb1: 1" << "cbb1: 2" << "cbb1: 3" << "cbb1: 4";
        QComboBox *initCbb =  new QComboBox;
        initCbb->addItems(newStr);
        ui->tableWidget->setCellWidget(i,1, initCbb);
    }
    //信号和槽的连接
    connect(ui->tableWidget,&QTableWidget::cellClicked,this,
            &MainWindow::doSth);

}

void MainWindow::doSth()
{
    //企图在这里得到行号
    int rowNum = ui->tableWidget->currentRow();
    qDebug() << "current row is :" << QString::number(rowNum, 10);
}
MainWindow::~MainWindow()
{
    delete ui;
}
