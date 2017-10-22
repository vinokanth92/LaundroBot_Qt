#include "segmentation.h"
#include <opencv2/opencv.hpp>
#include <iostream>

cv::Mat Segmentation::getSegments(cv::Mat inputImage)
{

    Segmentation::sampleInput(inputImage);

    //Incomplete code

    return inputImage;
}

cv::Mat Segmentation::sampleInput(cv::Mat &inputImage)
{
    std::cout << "Size: " << inputImage.size << std::endl;
    std::cout << "Rows: " << inputImage.rows << std::endl;
    std::cout << "Cols: " << inputImage.cols << std::endl;
    std::cout << "Size rows x cols: " << inputImage.rows * inputImage.cols << std::endl;

    //Incomplete code

    return inputImage;
}
