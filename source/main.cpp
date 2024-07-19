#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Create a simple black image
    // cv::Mat image = cv::Mat::zeros(480, 640, CV_8UC3);
    cv::Mat image = cv::imread("/app/images/image0.jpeg", 0);

    // resize image
    cv::Mat resized;
    int width = 1240;
    int height = 720;
    cv::resize(image, resized, cv::Size(width, height), cv::INTER_LINEAR);

    // Put some text on the image
    // cv::putText(image, "Hello, OpenCV!", cv::Point(200, 300), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255, 255, 255), 2, cv::LINE_AA);
    // cv::circle(image, cv::Point(100, 200), 10, cv::Scalar(0, 255, 0), 1, cv::LINE_AA);

    // Display the image in a window
    cv::namedWindow("window", cv::WINDOW_AUTOSIZE);
    cv::imshow("window", resized);

    // Wait for a keystroke in the window
    cv::waitKey(0);

    cv::destroyAllWindows();

    cv::imwrite("/app/grayscale.jpg", resized);

    return 0;
}