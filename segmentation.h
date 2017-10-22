#ifndef SEGMENTATION_H
#define SEGMENTATION_H

#include <QObject>
#include <opencv2/opencv.hpp>
#include <QPixmap>

namespace Segmentation
{
    int k;
    cv::Mat getSegments(cv::Mat inputImage);
    cv::Mat sampleInput(cv::Mat &inputImage);


}

#endif // SEGMENTATION_H
