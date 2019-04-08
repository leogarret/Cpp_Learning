#include <iostream>
#include "my_int.hpp"
using namespace std;

int reused = 42;

int main()
{
	int i = 100, sum = 0;

	for (int i = 0; i != 10;) {
		sum += i;
		::i++;
	}
	cout << i << " " << sum << endl;
	while (1);
	return 0;
}