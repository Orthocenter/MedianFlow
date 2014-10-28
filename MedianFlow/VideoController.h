//
//  VideoController.h
//  MedianFlow
//
//  Created by 陈裕昕 on 10/16/14.
//  Copyright (c) 2014 陈裕昕. All rights reserved.
//

#ifndef __MedianFlow__VideoController__
#define __MedianFlow__VideoController__

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class VideoController
{
private:
    int curr, frame;
    Mat frames[2];
    
    VideoCapture *videoCapture;
    
public:
    
    VideoController();
    
    ~VideoController();
    
    VideoController(string &filename);
    
    Mat getCurrFrame();
    Mat getPrevFrame();
    bool readNextFrame();
    
    Size frameSize();
    
    int frameNumber();
};

#endif /* defined(__MedianFlow__VideoController__) */
