#include <iostream>
#include "OOP1.h"
using namespace std;


void ShowMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "����: ";
}

void es_account(Acc* ac) {

	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> ac->ID;
	cout << "�� ��: ";
	cin >> ac->name;
	cout << "�Աݾ�: ";
	cin >> ac->balance;
}

void deposit(Acc* ac) {
	int ID;
	int money;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";
	cin >> ID;
	cout << "�Աݾ�: ";
	cin >> money;

	for (int i = 0; i < 100; i++) {
		if (ac[i].ID == ID) {
			ac[i].balance += money;
		}
	}
	cout << "�ԱݿϷ�" << endl;
}

void withdraw(Acc* ac) {
	int ID;
	int money;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";
	cin >> ID;
	cout << "��ݾ�: ";
	cin >> money;

	for (int i = 0; i < 100; i++) {
		if (ac[i].ID == ID) {
			ac[i].balance -= money;
		}
	}
	cout << "��ݿϷ�" << endl;
}

void print(Acc* ac, int num) {
	for (int i = 0; i < num; i++) {
		cout << "���� ID: " << ac[i].ID << endl;
		cout << "�� ��: " << ac[i].name << endl;
		cout << "�� ��: " << ac[i].balance << endl;
	}
}

void exitpr() {
	cout << "���α׷��� �����մϴ�." << endl;
	exit(-1);
}