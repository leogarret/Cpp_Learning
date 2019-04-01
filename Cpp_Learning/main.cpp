#include <iostream>
using namespace std;

int main()
{
	int sum = 0, value = 0;

	cout << "Enter a list of number (each numbers followed by enter key) to make their sum." << endl;
	cout << "1: ";
	for (int i = 2; cin >> value; ++i) {
		cout << i << ": ";
		sum += value;
	}
	cout << "The sum is " << sum << "." << endl;
	while (1);
	return 0;
}