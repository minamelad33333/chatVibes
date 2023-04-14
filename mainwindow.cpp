
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
<<<<<<< HEAD
    this->showMaximized();
    QPixmap senderPic(":/imgs/senderPic.jpg") ;
    int w = ui->senderPic->width() ;
    int h = ui->senderPic->height() ;
    ui->senderPic->setPixmap(senderPic.scaled(w,h,Qt::KeepAspectRatio)) ;
=======
    // Set the window to open as full screen with the title bar, maximize button, and close button
    this->showMaximized();


>>>>>>> 2a075950ec568790498d733509d86f2976ad24dc
}

MainWindow::~MainWindow()
{
    delete ui;
}
