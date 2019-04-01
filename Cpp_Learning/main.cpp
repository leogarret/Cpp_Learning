#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	for (int i = 10; i >= 0; --i)
		sum += i;
	cout << "The sum is " << sum << "." << endl;
	while (1);
	return 0;
}