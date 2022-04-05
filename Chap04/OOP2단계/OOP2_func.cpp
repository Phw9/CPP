#include "OOP2.h"

Account* acc[100];
int acc_num = 0;

Account::Account(const int _ID, const char* _name, const int _balance)
	: ID(_ID), balance(_balance) {
	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
}

void Account::ShowInfo() {
	cout << "계좌 ID: " << ID << endl;
	cout << "이 름: " << name << endl;
	cout << "잔 액: " << balance << endl;
}
int Account::IDCheck() {
	return ID;
}
int Account::deposit(int money) {
	balance += money;
	return balance;
}
int Account::withdraw(int money) {
	balance -= money;
	return balance;
}
int Account::moneycheck(int money) {
	int temp = balance - money;
	return temp;
}
void ShowMenu() {
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택: ";
}
void es_account() {
	int __ID;
	char __name[20];
	int __balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> __ID;
	cout << "이 름: ";
	cin >> __name;
	cout << "입금액: ";
	cin >> __balance;
	acc[acc_num++] = new Account(__ID, __name, __balance);

}

void deposit() {
	int ID;
	int money;
	cout << "[입    금]" << endl;
	cout << "계좌ID: ";
	cin >> ID;
	cout << "입금액: ";
	cin >> money;

	for (int i = 0; i < acc_num; i++) {
		if (acc[i]->IDCheck() == ID) {
			acc[i]->deposit(money);
			cout << "입금완료" << endl;
			return;
		}
	}
	cout << "입금실패" << endl;
}
void withdraw() {
	int ID;
	int money;
	cout << "[출    금]" << endl;
	cout << "계좌ID: ";
	cin >> ID;
	cout << "출금액: ";
	cin >> money;

	for (int i = 0; i < acc_num; i++) {
		if (acc[i]->IDCheck() == ID) {
			if (acc[i]->moneycheck(money) < 0) {
				cout << "잔액부족" << endl;
				return;
			}
			acc[i]->withdraw(money);
			cout << "출금완료" << endl;
			return;
		}
	}
	cout << "출금실패" << endl;
}
void print() {
	for (int i = 0; i < acc_num; i++) {
		acc[i]->ShowInfo();
		cout << endl;
	}
}

void exitpr() {
	cout << "프로그램을 종료합니다." << endl;
	exit(-1);
}