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
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
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
	NameCard(const char* name, const char* comp, const char* num, int rank)
		: _rank(rank)
	{
		_name = new char[strlen(name)+1];
		strcpy_s(_name, strlen(name)+1, name);
		_comp = new char[strlen(comp)+1];
		strcpy_s(_comp, strlen(comp)+1, comp);
		_num = new char[strlen(num)+1];
		strcpy_s(_num, strlen(num)+1, num);
	}

	void ShowNameCardInfo() {
		cout << "�̸�: " << _name << endl;
		cout << "ȸ��: " << _comp << endl;
		cout << "��ȭ��ȣ: " << _num << endl;
		cout << "����: "; COMP_POS::ShowPositionInfo(_rank);
		cout << endl;
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
	
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}