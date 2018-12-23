#include <opencv2/highgui/highgui.hpp>

// bad way
using namespace cv;

int main(int argc, char** argv) {
	Mat img = imread(argv[1],-1);
	
	if (img.empty()) return -1;

	namedWindow("Example2", cv::WINDOW_AUTOSIZE);
	imshow("Example2",img);
	waitKey(0);

	destroyWindow("Example2");

	return 0;
}
