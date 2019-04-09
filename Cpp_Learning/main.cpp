#include <iostream>
#include "my_int.hpp"
using namespace std;

int main()
{
	int a = 98;
	int *p1 = &a;
	int *const p2 = p1;
	while (1);
	return 0;
}