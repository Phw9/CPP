#pragma once
#ifndef __OOP__2stage__
#define __OOP__2stage__

#include <iostream>
#include <cstring>
using namespace std;


class Account {
private:
	int ID;
	char* name;
	int balance;
public:
	Account();
	Account(const int _ID, const char* _name, const int _balance);
	Account(const Account &acc);
	~Account();

	void ShowInfo();			// �������� ���
	int IDCheck();				// ����Լ� ID ��ȯ
	int moneycheck(int money);	// ��ݽ� 0�� �������� �ݾ׹�ȯ
	int deposit(int money);		// �Ա�
	int withdraw(int money);	// ���
	char* nameCheck();
	int balanceCheck();
};
class AccountHandler : public Account {
private:
	Account* acc;
	static int acc_num;
public:
	AccountHandler();
	~AccountHandler();
	void ShowMenu();	//	�޴����
	void es_account();	//	1. ���°���
	void deposit();		//	2. ��	��
	void withdraw();	//	3. ��	��
	void print();		//	4. ��ü���
	void exitpr();		//	5. ��	��
};






#endif