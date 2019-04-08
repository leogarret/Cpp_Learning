#include <iostream>
#include "my_int.hpp"
using namespace std;

int main()
{
	int i = 12;
	int c = 42;
	int *ptr = &i;
	int *&ref = ptr;

	cout << *ref << endl;
	ref = &c;
	*ref = 54;
	cout << c << endl;
	while (1);
	return 0;
}