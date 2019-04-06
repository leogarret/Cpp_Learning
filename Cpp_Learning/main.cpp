#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	cout << "  ";
	for (char i = 'A'; i != 'H' + 1; ++i)
		cout << i << ' ';
	cout << endl;
	for (int i = 0; i <= 8; i++)
		cout << i << " . . . . . . . ." << endl;
	while (1);
	return 0;
}