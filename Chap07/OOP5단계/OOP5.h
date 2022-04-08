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

	void ShowInfo();			// 계좌정보 출력
	int IDCheck();				// 멤버함수 ID 반환
	int moneycheck(int money);	// 출금시 0원 이하인지 금액반환
	int deposit(int money);		// 입금
	int withdraw(int money);	// 출금
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
	void ShowMenu();	//	메뉴출력
	void es_account();	//	1. 계좌개설
	void deposit();		//	2. 입	금
	void withdraw();	//	3. 출	금
	void print();		//	4. 전체출력
	void exitpr();		//	5. 종	료
};






#endif