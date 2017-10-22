#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QGraphicsView>
#include <QLabel>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <opencv2/opencv.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_loadImageButton_clicked();
    void on_clearScreenButton_clicked();
    void on_segmentButton_clicked();

private:
    Ui::MainWindow *ui;
    cv::Mat _rawInputImage;
    QPixmap _inputImage;
    QPixmap _outputImage;
    QGraphicsScene _scene;
    QGraphicsPixmapItem _inputImagePixmapItem;

};

#endif // MAINWINDOW_H
