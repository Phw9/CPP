#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>


#define _CRT_SECURE_NO_WARNINGS


using namespace std;

int main(void) {


	//	1

	/*char arr[100] = "aaa";
	char cat[10] = "abc";
	strcat_s(arr, cat);
	cout << arr << endl;
	cout << cat << endl;
	cout << strlen(arr) << endl;
	cout << strlen(cat) << endl;
	strcpy_s(cat, arr);
	cout << arr << endl;
	cout << cat << endl;
	cout << strcmp(cat, arr);*/

	//	2
	//srand(time(NULL));

	for (int i = 0; i < 5; i++) {
	
		cout << rand()%100 << endl;
	}
	

	return 0;
}