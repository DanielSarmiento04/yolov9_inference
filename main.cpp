#include "opencv2/opencv.hpp"
#include <iostream>
#include <opencv2/core.hpp>    // Basic OpenCV structures (cv::Mat)
#include <opencv2/videoio.hpp> // Video write
#include <string>

using namespace cv;
using namespace std;


const string video_path = "";
const string window_name = "Camera";


int main(int argc, char const *argv[])
{

    int source = 1;
    VideoCapture video_capture(source); // open the default camera


    if (!video_capture.isOpened())
    {
        cout  << "Could not open the input video: " << source << endl;
        return -1;
    }



    for(;;)
    {
        Mat frame;
        bool success = video_capture.read(frame);
        auto keyboard_pressed = waitKey(1);


        if (!success)
        {
            cout << "Cannot read  frame " << endl;
            break;
        }

        if (keyboard_pressed == 'q')
        {
            break;
        } 
        imshow(window_name, frame);
    }

    video_capture.release();
    destroyAllWindows();
    return 0;
}
