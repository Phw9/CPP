#include "OOP5.h"

int main(void) {
	
	int menu_num = 0;
	AccountHandler handler;
	
	while (1) {
		handler.ShowMenu();
		cin >> menu_num;
		switch (menu_num) {

		case 1:	//���°���
			handler.es_account();
			break;

		case 2:	//�Ա�
			handler.deposit();
			break;

		case 3:	//���
			handler.withdraw();
			break;

		case 4:	//�������� ��ü���
			handler.print();
			break;

		case 5:	//���α׷� ����
			handler.exitpr();
		}
	}
	
	return 0;
}