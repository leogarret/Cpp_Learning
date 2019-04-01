#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	for (int val = 0; val <= 10; ++val)
		sum += val;
	cout << "Sum of 0 to 10 inclusive is " << sum << "." << endl;
	while (1);
	return 0;
}