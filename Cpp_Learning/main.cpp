#include <iostream>
using namespace std;

using entier = int;

int test()
{
	const int b = 13;
	auto a = 13;

	a = 23;
	return rand();
}

int main()
{
	constexpr int c = 67;
	constexpr const int *a = &c;
	return 0;
}