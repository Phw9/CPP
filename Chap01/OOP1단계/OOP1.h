#ifndef __OOP__1stage__
#define __OOP__1stage__

typedef struct _account {
	int ID;
	int balance;
	char name[10];
}Acc;

void ShowMenu();

void es_account(Acc* ac);

void deposit(Acc* ac);

void withdraw(Acc* ac);

void print(Acc* ac, int num);

void exitpr();



#endif