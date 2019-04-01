#include <iostream>
using namespace std;

int main()
{
	int start = 0, end = 0;

	cout << "Choose start and end numbers to iterate and display odd or even." << endl;
	cin >> start >> end;
	for (; start <= end; ++start) {
		if (!(start % 2))
			cout << start << " is even." << endl;
		else
			cout << start << " is odd." << endl;
	}
	while (1);
	return 0;
}