#include <iostream>
using namespace std;

typedef struct __Point {
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2) {
	Point add;
	add.xpos = p1.xpos + p2.xpos;
	add.ypos = p1.ypos + p2.ypos;

	return add;
}

int main(void) {

	Point* pt1 = new Point;
	Point* pt2 = new Point;
	pt1->xpos = 3, pt1->ypos = 4;
	pt2->xpos = 5, pt2->ypos = 10;

	cout << PntAdder(*pt1, *pt2).xpos << endl;
	cout << PntAdder(*pt1, *pt2).ypos << endl;

	delete pt1;
	delete pt2;
	


	return 0;
}