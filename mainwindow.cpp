#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<house.h>
#include<Person.h>
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
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(Qt::black);
    painter.setBrush(Qt::red);
    house housee(painter);
    painter.setBrush(Qt::white);
    Person person(painter);


}
