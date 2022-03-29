#include <iostream>
#include <cstring>
using namespace std;

typedef class __Calculator {
private:
	int add;
	int min;
	int mul;
	int div;

public:
	void Init() {
		add = 0, min = 0, mul = 0, div = 0;
	}
	double Add(double x, double y) {
		add++;
		return x + y;
	}
	double Div(double x, double y) {
		div++;
		return x / y;
	}
	double Min(double x, double y) {
		min++;
		return x - y;
	}
	double Mul(double x, double y) {
		mul++;
		return x * y;
	}
	void ShowOpCount() {
		cout << "µ¡¼À: " << add << " »¬¼À: " << min << " °ö¼À: " << mul << " ³ª´°¼À: " << div << endl;
	}


}Calculator;

typedef class __Printer {

private:
	char str[100];

public:
	void SetString(const char arr[]) {
		strcpy_s(str, arr);
	}
	void ShowString() {
		cout << str << endl;
	}

}Printer;



int main(void) {


	//	1
	
	/*Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();*/

	//	2

	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}