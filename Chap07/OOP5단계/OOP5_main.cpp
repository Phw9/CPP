#include "OOP5.h"

int main(void) {
	
	int menu_num = 0;
	AccountHandler handler;
	
	while (1) {
		handler.ShowMenu();
		cin >> menu_num;
		switch (menu_num) {

		case 1:	//계좌개설
			handler.es_account();
			break;

		case 2:	//입금
			handler.deposit();
			break;

		case 3:	//출금
			handler.withdraw();
			break;

		case 4:	//계좌정보 전체출력
			handler.print();
			break;

		case 5:	//프로그램 종료
			handler.exitpr();
		}
	}
	
	return 0;
}