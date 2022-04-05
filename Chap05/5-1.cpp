#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

namespace COMP_POS {
	enum {
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};
	void ShowPositionInfo(int pos) {
		switch (pos) {
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
}


class NameCard {
private:
	char* _name;
	char* _comp;
	char* _num;
	int _rank;
public:
	NameCard(NameCard& cardd) {
		_name = new char[strlen(cardd.named()) + 1];
		strcpy_s(_name, strlen(cardd.named()) + 1, cardd.named());
		_comp = new char[strlen(cardd.compd()) + 1];
		strcpy_s(_comp, strlen(cardd.compd()) + 1, cardd.compd());
		_num = new char[strlen(cardd.numd()) + 1];
		strcpy_s(_num, strlen(cardd.numd()) + 1, cardd.numd());
		_rank = cardd.rankd();
	}
	
	NameCard(const char* name, const char* comp, const char* num, int rank)
		: _rank(rank)
	{
		_name = new char[strlen(name) + 1];
		strcpy_s(_name, strlen(name) + 1, name);
		_comp = new char[strlen(comp) + 1];
		strcpy_s(_comp, strlen(comp) + 1, comp);
		_num = new char[strlen(num) + 1];
		strcpy_s(_num, strlen(num) + 1, num);
	}

	void ShowNameCardInfo() {
		cout << "이름: " << _name << endl;
		cout << "회사: " << _comp << endl;
		cout << "전화번호: " << _num << endl;
		cout << "직급: "; COMP_POS::ShowPositionInfo(_rank);
		cout << endl;
	}
	char* named() {
		return _name;
	}
	char* compd() {
		return _comp;
	}
	char* numd() {
		return _num;
	}
	int rankd() {
		return _rank;
	}

	~NameCard() {
		delete[]_name;
		delete[]_comp;
		delete[]_num;
	}
};

int main(void) {

	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	NameCard copy1 = manClerk;
	NameCard copy2(manSENIOR);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();

	return 0;
}