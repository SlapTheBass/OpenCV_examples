#include <opencv4/opencv2/opencv.hpp>

int main(int, char**)
{
    cv::VideoCapture myvid("/home/mateusz/test/test.mp4");

    if(!myvid.isOpened())
        return -1;

    cv::namedWindow("Video", 1);

    while(true){
        cv::Mat frame;
        myvid >> frame;

        cv::imshow("Video", frame);

        if(cv::waitKey(30) > 0){
            cv::destroyAllWindows();
            break;
        }
    }
}
