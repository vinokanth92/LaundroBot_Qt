#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include <QDebug>
#include <QRectF>

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
    this->inputImage.load(selectedFile);

    this->inputImagePixmapItem.setPixmap((this->inputImage));
    this->scene.addItem(&this->inputImagePixmapItem);
    this->ui->inputImageViewWidget->setScene(&this->scene);
    this->ui->inputImageViewWidget->fitInView(&this->inputImagePixmapItem,Qt::KeepAspectRatio);

    fileDialog.saveState();
    return;
}

void MainWindow::on_clearScreenButton_clicked()
{
    this->scene.removeItem(&this->inputImagePixmapItem);
}
