#ifndef FACEDET_H
#define FACEDET_H

#include <iostream>
#include <thread>
#include <vector>

#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

namespace faceDetection
{ 
    std::vector<cv::Rect> faceDet(const std::string &p_path, cv::CascadeClassifier &p_faceCascade);    
} 

#endif