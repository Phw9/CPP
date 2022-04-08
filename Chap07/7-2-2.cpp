#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
	char* title;
	char* isbn;
	int price;
public:
	Book() {
		title = new char[10]{ "NULL" };
		isbn = new char[10]{ "NULL" };
		price = 0;
	}
	Book(const char* ti, const char* is, int pr) : price(pr) {
		title = new char[strlen(ti) + 1];
		isbn = new char[strlen(is) + 1];
		strcpy_s(title, strlen(ti) + 1, ti);
		strcpy_s(isbn, strlen(is) + 1, is);
	}
	~Book() {
		delete[] title;
		delete[] isbn;
	}
	void ShowBookInfo() {
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "가격: " << price << endl;
	}
};

class EBook : public Book {
private:
	char* DRMKey;
public:
	EBook(): Book() {
		DRMKey = new char[10]{ "NULL" };
	}
	EBook(const char* ti, const char* is, const int& pr, const char* key) : Book(ti, is, pr) {
		DRMKey = new char[strlen(key) + 1];
		strcpy_s(DRMKey, strlen(key) + 1, key);
	}
	~EBook() {
		delete[] DRMKey;
	}
	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "인증키: " << DRMKey << endl;
	}
};


int main(void) {

	Book book("좋은 C++", "555-12345-809-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 C++ EBook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	return 0;
}