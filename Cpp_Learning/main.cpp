#include <iostream>
#include "my_int.hpp"
using namespace std;

int reused = 42;

int main()
{
	int a = 12, b = 24;
	int *ptr = &a;

	cout << *ptr << endl;
	*ptr = 42;
	cout << a << endl;
	ptr = &b;
	cout << *ptr << endl;
	while (1);
	return 0;
}