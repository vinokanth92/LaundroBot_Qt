#ifndef SEGMENTATION_H
#define SEGMENTATION_H

#include <QObject>
#include <opencv2/opencv.hpp>


class Segmentation
{
public:
    Segmentation();
    ~Segmentation();

private:
    cv::Mat inputImage;
    cv::Mat outputImage;
    int k;
    cv::Mat getSamplesFromImage(cv::Mat inputImage);
    void compute();

};

#endif // SEGMENTATION_H
