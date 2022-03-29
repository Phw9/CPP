#include <iostream>
using namespace std;

//	1

//int add(int& i) {
//	i++;
//	return i;
//}
//int minuss(int& i) {
//	i = i * (-1);
//	return i;
//}

//3
void SwapPointer(int* &pt1, int* &pt2) {
	int* temp;
	temp = pt1;
	pt1 = pt2;
	pt2 = temp;
}


int main() {

	//	1
	/*int num = 1;
	add(num);
	cout << add(num) << endl;
	cout << minuss(num) << endl;*/
	
	//	3

	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2);
	cout << *ptr1 << ' ' << *ptr2;


	return 0;
}