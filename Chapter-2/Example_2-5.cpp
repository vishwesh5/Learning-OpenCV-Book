#include <opencv2/opencv.hpp>
#include <iostream>

void example2_5(const cv::Mat & image) {
	// Create some windows to show the input
	// and output images in.
	cv::namedWindow( "Example2_5-in",cv::WINDOW_AUTOSIZE);
	cv::namedWindow( "Example2_5-out",cv::WINDOW_AUTOSIZE);
	
	// Create a window to show our input image
	//
	cv::imshow("Example2_5-in", image);
	
	// Create an image to hold the smoothed output
	//
	cv::Mat out;

	// Do the smoothing
	//
	cv::GaussianBlur(image,out,
		cv::Size(15,15),
		3,3);
	cv::GaussianBlur(out,out,
		cv::Size(15,15),
		3,3);

	cv::imshow("Example2_5-out", out);

	cv::waitKey(0);

	cv::destroyAllWindows();
}

int main(int argc, char** argv) {
	cv::Mat image = cv::imread(argv[1],-1);
	example2_5(image);
	return 0;
}
