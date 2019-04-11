#include <iostream>
#include "my_int.hpp"
using namespace std;

int main()
{
	const int a = 45; // Top level
	const int *const pa = &a; // Top level
	const int *pa = &a; // Low level
	while (1);
	return 0;
}