#include <iostream>
using namespace std;

class Car {
private:
	int gasolineGauge;
public:
	Car() :gasolineGauge(0) {
		cout << "basic constructor of Car" << endl;
	};
	Car(const int& gas) :gasolineGauge(gas) {};
	~Car() {
		cout << "Destructor of Car" << endl;
	}
	int GetGasGauge() {
		return gasolineGauge;
	}
};

class HybridCar :public Car {
private:
	int electricGauge;
public:
	HybridCar() :electricGauge(0) {
		cout << "basic constructor of HybridCar" << endl;
	};
	HybridCar(const int& gas) :electricGauge(gas) {};
	~HybridCar() {
		cout << "Destructor of HybridCar" << endl;
	}
	int GetElecGauge() {
		return electricGauge;
	}
};

class HybridWaterCar :public HybridCar {
private:
	int waterGauge;
public:
	HybridWaterCar() :HybridWaterCar(0) {
		cout << "basic constructor of HybridWaterCar" << endl;
	};
	HybridWaterCar(const int& gas) :waterGauge(gas) {};
	~HybridWaterCar() {
		cout << "Destructor of HybridWaterCar" << endl;
	}
	void ShowCurrentGauge() {
		cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·®: " << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·®: " << waterGauge << endl;
	}
};


int main(void) {

	Car car0(222);

	HybridWaterCar car1(19);
	car1.ShowCurrentGauge();
	return 0;
}