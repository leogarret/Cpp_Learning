#include <iostream>
#include "my_int.hpp"
using namespace std;

int reused = 42;

int main()
{
	int reused = 12;

	cout << reused << endl; // Display the local variable
	cout << ::reused << endl; // Display the global variable
	while (1);
	return 0;
}