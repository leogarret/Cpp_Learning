#include <iostream>
using namespace std;

int main()
{
	int curVal = 0, val = 0;

	if (cin >> val) {
		int count = 0;

		count = 1;
		while (cin >> val) {
			if (val == curVal)
				++count;
			else {
				cout << curVal << " occurs " << count << " times." << endl;
				curVal = val;
				count = 1;
			}
		}
		cout << curVal << " occurs " << count << " times." << endl;
	}
	while (1);
	return 0;
}