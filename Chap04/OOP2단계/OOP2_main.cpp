#include "OOP2.h"
using namespace std;



int main(void) {
	
	int menu_num = 0;
	
	while (1) {
		ShowMenu();
		cin >> menu_num;
		switch (menu_num) {

		case 1:	//계좌개설
			es_account();
			break;

		case 2:	//입금
			deposit();
			break;

		case 3:	//출금
			withdraw();
			break;

		case 4:	//계좌정보 전체출력
			print();
			break;

		case 5:	//프로그램 종료
			exitpr();
		}
	}
	return 0;
}