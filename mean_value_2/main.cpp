#include<opencv2\opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main() {
	VideoCapture cap;
	cap.open(0);
	while (1) {
		cv::Mat src, dst;
		bool rSucess = cap.read(src);
		if (rSucess) {

			GaussianBlur(src, dst, Size(3, 3), 100, 0);
			imshow("src", src);
			imshow("dst", dst);
			waitKey(0);
		}


	}

}