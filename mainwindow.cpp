#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;
Mat image;
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

void MainWindow::on_loadimg_clicked()
{
    //Mat image, b, g, r,energia;
    Mat canales[3];
    image = imread("C:\\tf\\original.jpg");
    split(image, canales);
    imshow("aqp_plaza", image);
    waitKey(0);
}
void MainWindow::on_cua_clicked()
{
    Mat canales[3];
    Mat imagen = imread("../original.jpg");
    Point p1(30, 30);
    Point p2(255, 255);
    int thickness = 2;
    rectangle(imagen, p1, p2,
              Scalar(255, 0, 0),
              thickness, LINE_4);
    imshow("cuadrado", imagen);
    waitKey(0);
}
