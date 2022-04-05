#include "OOP2.h"

Account* acc[100];
int acc_num = 0;

Account::Account(const int _ID, const char* _name, const int _balance)
	: ID(_ID), balance(_balance) {
	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
}

void Account::ShowInfo() {
	cout << "���� ID: " << ID << endl;
	cout << "�� ��: " << name << endl;
	cout << "�� ��: " << balance << endl;
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
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "����: ";
}
void es_account() {
	int __ID;
	char __name[20];
	int __balance;

	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> __ID;
	cout << "�� ��: ";
	cin >> __name;
	cout << "�Աݾ�: ";
	cin >> __balance;
	acc[acc_num++] = new Account(__ID, __name, __balance);

}

void deposit() {
	int ID;
	int money;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";
	cin >> ID;
	cout << "�Աݾ�: ";
	cin >> money;

	for (int i = 0; i < acc_num; i++) {
		if (acc[i]->IDCheck() == ID) {
			acc[i]->deposit(money);
			cout << "�ԱݿϷ�" << endl;
			return;
		}
	}
	cout << "�Աݽ���" << endl;
}
void withdraw() {
	int ID;
	int money;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";
	cin >> ID;
	cout << "��ݾ�: ";
	cin >> money;

	for (int i = 0; i < acc_num; i++) {
		if (acc[i]->IDCheck() == ID) {
			if (acc[i]->moneycheck(money) < 0) {
				cout << "�ܾ׺���" << endl;
				return;
			}
			acc[i]->withdraw(money);
			cout << "��ݿϷ�" << endl;
			return;
		}
	}
	cout << "��ݽ���" << endl;
}
void print() {
	for (int i = 0; i < acc_num; i++) {
		acc[i]->ShowInfo();
		cout << endl;
	}
}

void exitpr() {
	cout << "���α׷��� �����մϴ�." << endl;
	exit(-1);
}