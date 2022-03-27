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

		case 1:	//계좌개설
			es_account(&account[acc_num]);
			(acc_num)++;
			break;

		case 2:	//입금
			deposit(account);
			break;

		case 3:	//출금
			withdraw(account);
			break;

		case 4:	//계좌정보 전체출력
			print(account, acc_num);
			break;

		case 5:	//프로그램 종료
			exitpr();
		}
	}

}