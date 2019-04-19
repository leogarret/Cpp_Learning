#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout; using std::endl;

int main()
{
	int start = 0, end = 0;

	cout << "Start number : ";
	cin >> start;
	cout << "End number : ";
	cin >> end;
	while (start <= end)
		cout << start++ << endl;
	getchar();
	return 0;
}