#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo {
private:
	char* name;
	int age;
public:
	MyFriendInfo() :age(0) {
		name = new char[10]{ "NULL" };
	}
	MyFriendInfo(const char* (nm), const int& a) :age(a) {
		name = new char[strlen(nm) + 1];
		strcpy_s(name, strlen(nm) + 1, nm);
	}
	~MyFriendInfo() {
		delete[] name;
	}
	void ShowMyFriendInfo() {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

class MyFreindDetailInfo :public MyFriendInfo {
private:
	char* addr;
	char* phone;
public:
	MyFreindDetailInfo() {
		addr = new char[10]{ "NULL" };
		phone = new char[10]{ "NULL" };
	}
	MyFreindDetailInfo(const char* ad, const char* ph) {
		addr = new char[strlen(ad) + 1];
		strcpy_s(addr, strlen(ad) + 1, ad);
		phone = new char[strlen(ph) + 1];
		strcpy_s(phone, strlen(ph) + 1, ph);
	}
	~MyFreindDetailInfo() {
		delete[] addr;
		delete[] phone;
	}
	void ShowMyFriendDetailInfo() {
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cerr << "전화: " << phone << endl << endl;
	}
};


int main(void) {

	cout << endl;
	MyFreindDetailInfo man("asdf","01049090164");
	man.ShowMyFriendDetailInfo();
	return 0;
}