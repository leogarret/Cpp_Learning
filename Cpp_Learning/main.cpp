#include <iostream>
using namespace std;

int test()
{
	return rand();
}

int main()
{
	const int a = test();

	return 0;
}