#include "OOP2.h"
using namespace std;



int main(void) {
	
	int menu_num = 0;
	
	while (1) {
		ShowMenu();
		cin >> menu_num;
		switch (menu_num) {

		case 1:	//���°���
			es_account();
			break;

		case 2:	//�Ա�
			deposit();
			break;

		case 3:	//���
			withdraw();
			break;

		case 4:	//�������� ��ü���
			print();
			break;

		case 5:	//���α׷� ����
			exitpr();
		}
	}
	return 0;
}