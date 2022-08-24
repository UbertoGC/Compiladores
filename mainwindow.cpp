#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    Mat image, b, g, r,energia;
    Mat canales[3];
    image = imread("C:\\tf\\original.jpg");
    split(image, canales);
    b = canales[0], g = canales[1], r = canales[2];
    imshow("aqp_plaza", image);
    waitKey(0);
}

