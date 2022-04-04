#include <iostream>
using namespace std;

typedef class __Point {
private:
	int xpos, ypos;
public:
	void Init(const int& x, const int& y) {
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}

}Point;


class Circle {
private:
	Point center;
	double radius;
public:
	void Init(const int& xpos,const int& ypos, const double& rad) {
		center.Init(xpos, ypos), radius = rad;
	}
	void ShowCircleInfo(void) {
		cout << "radius : " << radius << endl;
		cout << "center: "; center.ShowPointInfo();
	}
};

class Ring {
private:
	Circle inner;
	Circle outter;
public:
	void Init(const int& in_xpos, const int& in_ypos, const double& in_rad, const int& out_xpos, const int& out_ypos, const double& out_rad) {
		inner.Init(in_xpos, in_ypos, in_rad);
		outter.Init(out_xpos, out_ypos, out_rad);
	}
	void ShowRingInfo() {
		cout << "Inner Circle Info..." << endl;
		inner.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		outter.ShowCircleInfo();
	}
};



int main(void) {

	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}
