#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include <QDebug>
#include <QRectF>
#include <segmentation.h>

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowState(Qt::WindowFullScreen);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loadImageButton_clicked()
{
    QFileDialog fileDialog(this, Qt::Dialog);
    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.setNameFilter("*.jpg *.png *.jpeg");
    fileDialog.setViewMode(QFileDialog::Detail);
    fileDialog.exec();

    QStringList selectedFileName = fileDialog.selectedFiles();
    QString selectedFile = selectedFileName.at(0);
    _inputImage.load(selectedFile);
    _rawInputImage = cv::imread(selectedFile.toStdString());

    _inputImagePixmapItem.setPixmap((_inputImage));
    _scene.addItem(&_inputImagePixmapItem);
    this->ui->inputImageViewWidget->setScene(&_scene);
    this->ui->inputImageViewWidget->fitInView(&_inputImagePixmapItem, Qt::KeepAspectRatio);

    fileDialog.saveState();
    return;
}

void MainWindow::on_clearScreenButton_clicked()
{
    _scene.removeItem(&_inputImagePixmapItem);
    return;
}

void MainWindow::on_segmentButton_clicked()
{
    cv::Mat segmentedOutputImage = Segmentation::getSegments(_rawInputImage);
}


