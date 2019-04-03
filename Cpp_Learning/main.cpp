#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item books;

	if (cin >> books) {
		Sales_item buff;
		while (cin >> buff) {
			if (buff.isbn() == books.isbn())
				books += buff;
			else {
				cout << books << endl;
				while (1);
				return 0;
			}
		}
		cout << books << endl;
		while (1);
		return 0;
	}
	else {
		cout << "No data!" << endl;
		return -1;
	}
	return 0;
}