#include <iostream>
#include <cstring>
using namespace std;

class Rectangle {
private:
	int width;
	int height;
public:
	Rectangle() :width(0), height(0) {}
	Rectangle(const int(&w), const int(&h)) :width(w), height(h) {}

	void ShowAreaInfo() {
		cout << "¸éÀû: " << width * height << endl;
	}
};
class Square : public Rectangle {
private:
	int segment;
public:
	Square() : segment(0) {}
	Square(const int& seg) : Rectangle(seg, seg) {}
};


int main(void) {
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}