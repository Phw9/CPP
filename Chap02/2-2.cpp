#include <iostream>
using namespace std;

int main(void) {

	const int num = 12;
	const int* ptr = &num;
	const int* (&ptr1) = ptr;
	cout << *ptr << ' ' << *ptr1 << endl;

	return 0;
}