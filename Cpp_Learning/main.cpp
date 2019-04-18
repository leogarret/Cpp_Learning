#include <iostream>
using namespace std;

using entier = int;

auto test()
{
	return 1345765999999999995;
}

int main()
{
	decltype(test()) i = 42;

	return 0;
}