#include <iostream>
#include "OOP1.h"
using namespace std;


void ShowMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택: ";
}

void es_account(Acc* ac) {

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> ac->ID;
	cout << "이 름: ";
	cin >> ac->name;
	cout << "입금액: ";
	cin >> ac->balance;
}

void deposit(Acc* ac) {
	int ID;
	int money;
	cout << "[입    금]" << endl;
	cout << "계좌ID: ";
	cin >> ID;
	cout << "입금액: ";
	cin >> money;

	for (int i = 0; i < 100; i++) {
		if (ac[i].ID == ID) {
			ac[i].balance += money;
		}
	}
	cout << "입금완료" << endl;
}

void withdraw(Acc* ac) {
	int ID;
	int money;
	cout << "[입    금]" << endl;
	cout << "계좌ID: ";
	cin >> ID;
	cout << "출금액: ";
	cin >> money;

	for (int i = 0; i < 100; i++) {
		if (ac[i].ID == ID) {
			ac[i].balance -= money;
		}
	}
	cout << "출금완료" << endl;
}

void print(Acc* ac, int num) {
	for (int i = 0; i < num; i++) {
		cout << "계좌 ID: " << ac[i].ID << endl;
		cout << "이 름: " << ac[i].name << endl;
		cout << "잔 액: " << ac[i].balance << endl;
	}
}

void exitpr() {
	cout << "프로그램을 종료합니다." << endl;
	exit(-1);
}