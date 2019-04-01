#include <iostream>
using namespace std;

int main()
{
	int sum = 0, val = 0, end = 0;

	cout << "Choose two numbers to make a sequence and print the result of all the sequence' numbers" << endl;
	cin >> val >> end;
	while (val <= end) {
		sum += val;
		++val;
	}
	cout << "Sum of 10 to 0 not inclusive is " << sum << "." << endl;
	while (1);
	return 0;
}