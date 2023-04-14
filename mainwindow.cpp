
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
    QPixmap senderPic(":/imgs/senderPic.jpg") ;
    int w = ui->senderPic->width() ;
    int h = ui->senderPic->height() ;
    ui->senderPic->setPixmap(senderPic.scaled(w,h,Qt::KeepAspectRatio)) ;
}

MainWindow::~MainWindow()
{
    delete ui;
}
