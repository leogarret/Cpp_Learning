#include <iostream>
#include "my_int.hpp"
using namespace std;

int reused = 42;

int main()
{
	int a = 12;
	int *p = &a;

	cout << *p << endl;
	while (1);
	return 0;
}