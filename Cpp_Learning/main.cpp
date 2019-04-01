#include <iostream>
using namespace std;

int main()
{
	char *name = new (char[56]);

	cout << "What your name?" << endl;
	cin >> name;
	cout << "Hello " << name << "!" << endl;
	return 0;
}