#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Create a simple black image
    cv::Mat image = cv::Mat::zeros(480, 640, CV_8UC3);

    // Put some text on the image
    cv::putText(image, "Hello, OpenCV!", cv::Point(200, 300), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255, 255, 255), 2, cv::LINE_AA);
    cv::circle(image, cv::Point(100, 200), 10, cv::Scalar(0, 255, 0), 1, cv::LINE_AA);

    // Display the image in a window
    cv::imshow("window", image);

    // Wait for a keystroke in the window
    cv::waitKey(0);

    return 0;
}