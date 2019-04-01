#include <iostream>
using namespace std;

int main()
{
	int start = 0, end = 0;
	int sum = 0;

	while (start >= end) {
		cout << "Enter two numer to make a sequence (start number is lesser than end number)." << endl;
		cin >> start;
		cin >> end;
	}
	for (; start <= end; start++)
		sum += start;
	cout << "The sum is: " << sum << endl;
	while (1);
	return 0;
}