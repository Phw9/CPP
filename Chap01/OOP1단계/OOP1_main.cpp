#include <iostream>
#include "OOP1.h"
using namespace std;

int main(void) {
	Acc account[100];
	int acc_num = 0;
	int menu_num;

	while (1) {
		ShowMenu();
		cin >> menu_num;

		switch (menu_num) {

		case 1:	//���°���
			es_account(&account[acc_num]);
			(acc_num)++;
			break;

		case 2:	//�Ա�
			deposit(account);
			break;

		case 3:	//���
			withdraw(account);
			break;

		case 4:	//�������� ��ü���
			print(account, acc_num);
			break;

		case 5:	//���α׷� ����
			exitpr();
		}
	}

}