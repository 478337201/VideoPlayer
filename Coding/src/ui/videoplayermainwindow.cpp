#include "videoplayermainwindow.h"

#include "ui_videoplayermainwindow.h"

VideoPlayerMainWindow::VideoPlayerMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VideoPlayerMainWindow)
{
    ui->setupUi(this);
}

VideoPlayerMainWindow::~VideoPlayerMainWindow()
{
    delete ui;
}
