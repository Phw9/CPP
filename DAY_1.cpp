#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

/* Banking System Ver 1.0
   작성자 : 박현우
   내  용 : OOP 단계별 프로젝트의 기본 틀 구성*/

//typedef struct Bank_Account {
//	int BankID;		//계좌 ID
//	char name[20];	//이름
//	int balance;	//잔액
//}Account;
//
//namespace HWBank{
//	Account a;
//	void Make_Account(void){
//		std::cout << "[계좌개설]" << std::endl;
//		std::cout << "계좌ID: "; std::cin >> a.BankID;
//		std::cout << "이 름: "; std::cin >> a.name;
//		std::cout << "입금액: "; std::cin >> a.balance;
//	}
//	void Deposit(void) {
//		int money;
//		std::cout << "[입    금]" << std::endl;
//		std::cout << "계좌ID: " << a.BankID << std::endl;
//		std::cout << "입금액: "; std::cin >> money;
//		a.balance += money;
//		std::cout << "입금완료. 잔액: " << a.balance << std::endl << std::endl;
//	}
//	void WithDrawl(void) {
//		int money;
//		std::cout << "[출    금]" << std::endl;
//		std::cout << "계좌ID: " << a.BankID<< std::endl;
//		std::cout << "출금액: "; std::cin >> money;
//		a.balance -= money;
//		std::cout << "출금완료. 잔액: " << a.balance << std::endl << std::endl;
//	}
//	void Account_INFO(void){
//		std::cout << "[계좌정보]" << std::endl;
//		std::cout << "계좌ID: " << a.BankID << std::endl;
//		std::cout << "이름: " << a.name << std::endl;
//		std::cout << "잔액: "; std::cout << a.balance << std::endl << std::endl;
//	}
//	void Exit_Prog(void) {
//		std::cout << "종료합니다." << std::endl << std::endl;
//	}
//}
//using namespace HWBank;

//namespace BestComImpl {
//	void SimpleFunc(void) {
//		std::cout << "BestComImpl이 정의한 함수" << std::endl;
//	}
//}
//namespace ProgComImpl {
//	void SimplFunc(void) {
//		std::cout << "ProgComImpl이 정의한 함수" << std::endl;
//	}
//}
void SwapByRef2(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

void SwapByptr2(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
int add1(int& ref1) {
	ref1++;
	return ref1;
}

int conv_min(int* ref1) {
	return -(*ref1);
}

void Swapptr(int* (&ref1), int* (&ref2)) {
	int* temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}
typedef struct __Point {
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2) {
	
	Point* nptr = new Point;
	nptr->xpos = p1.xpos + p2.xpos;
	nptr->ypos = p1.ypos + p2.ypos;
	return *nptr;
}

int main(void)
{
	// Namesp1.cpp
	/*BestComImpl::SimpleFunc();
	ProgComImpl::SimplFunc();*/
	
	//BankingSystemVer01.cpp


	/*int roop = 1;
	while (roop == 1) {
		int input;
		std::cout << "-----Menu------" << std::endl;
		std::cout << "1. 계좌개설" << std::endl;
		std::cout << "2. 입 금" << std::endl;
		std::cout << "3. 출 금" << std::endl;
		std::cout << "4. 계좌정보 전체 출력" << std::endl;
		std::cout << "5. 프로그램 종료" << std::endl;
		std::cout << "선택: "; std::cin >> input;
		switch (input) {
		case 1: {
			Make_Account();
			break;
		}
		case 2: {
			Deposit();
			break;
		}
		case 3: {
			WithDrawl();
			break;
		}
		case 4: {
			Account_INFO();
			break;
		}
		case 5: {
			Exit_Prog();
			roop = 0;
			break;
		}
		}
	}*/

	//RefArrElem.cpp


	/*int arr[3] = { 1,3,5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;*/

	//RefPtr.cpp

	/*int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&ref1) = ptr;
	int** (&ref2) = dptr;

	cout << num << endl;
	cout << ref << endl;
	cout << *ptr << endl;
	cout << *ref1 << endl;
	cout << **dptr << endl;
	cout << **ref2 << endl;*/

	//Ref,Ptr Swap.cpp

	/*int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);
	cout << val1 << endl;
	cout << val2 << endl;
	SwapByptr2(&val1, &val2);
	cout << val1 << endl;
	cout << val2 << endl;*/

	//2-1-1.cpp

	/*int val1 = 20;
	int val2 = 30;
	cout << add1(val1) << endl;
	cout << conv_min(&val2) << endl;*/


	//2-1-3.cpp

	/*int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	Swapptr(ptr1, ptr2);
	cout << num1 << endl;
	cout << num2 << endl;
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;*/
	//2-2-1

	//const int num = 12;
	//const int* ptr = &num;
	//const int& ref = *ptr;	//const int* (&ref) = ptr; 과 동일
	//cout << ref << endl;


	//2-3-1

	/*Point* m1 = new Point;
	m1->xpos = 1, m1->ypos = 2;
	Point* m2 = new Point;
	m2->xpos = 3, m2->ypos = 4;

	Point& pref = PntAdder(*m1, *m2);
	
	cout << pref.xpos << endl;
	cout << pref.ypos << endl;

	delete m1;
	delete m2;
	delete &pref;*/

	//2-4-1

	/*const char* str1 = "ABC 123 ";
	const char* str2 = "DEF 456 ";
	char str3[50];

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	strcpy(str3, str1);
	strcat(str3, str2);
	cout << str3 << endl;

	if (strcmp(str1, str3) == 0)
		cout << "문자열같음" << endl;
	else
		cout << "문자열다름" << endl;*/

	//2-4-2
	
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
		printf("Random number #%d: %d\n", i, rand() % 100);



	return 0;
}