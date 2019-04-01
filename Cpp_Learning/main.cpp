#include <iostream>
using namespace std;

int main()
{
	int sum = 0, value = 0;

	while (cin >> value){
		sum += value;
	}
	cout << "The sum is " << sum << "." << endl;
	while (1);
	return 0;
}