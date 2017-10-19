#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <segmentation.h>
#include <QPixmap>
#include <QGraphicsView>
#include <QLabel>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

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

private:
    Ui::MainWindow *ui;
    Segmentation segmentation;
    QPixmap inputImage;
    QPixmap outputImage;
    QGraphicsScene scene;
    QGraphicsPixmapItem inputImagePixmapItem;

};

#endif // MAINWINDOW_H
