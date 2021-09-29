#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
//    connect(ui->pushBtn_up, SIGNAL(clicked()), this, SLOT(ClickButtonUp()));
}

void  MainWindow::ClickButtonUp()
{
//    ui->pushBtn_up->setText("UP");
}

MainWindow::~MainWindow()
{
  delete ui;
}

