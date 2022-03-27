#include <iostream>
using namespace std;

void swap(int* n1, int* n2);
void swap(char* n1, char* n2);
void swap(double* n1, double* n2);


int main(void) {

	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout << dbl1 << ' ' << dbl2 << endl;
	return 0;

}

void swap(int* n1, int* n2) {
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
void swap(char* n1, char* n2) {
	char temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
void swap(double* n1, double* n2) {
	double temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}