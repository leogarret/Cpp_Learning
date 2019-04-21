#include <iostream>
#include <string>
#include <vector>

int strlen(char *str)
{
	int i = 0;
	for (; str[i] != '\0'; ++i);
	return (i);
}

int main()
{
	std::vector<int> tab = { 12, 45, 32, 23, 98, 0, 32, 6 };
	auto sit = tab.begin(), send = tab.end() - 1;

	for (; sit != send && sit < send; ++sit, --send)
		std::cout << *sit + *send << std::endl;
	std::getchar();
	return 0;
}