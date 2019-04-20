#include <iostream>
#include "Sales_item.h"
#include <string>

int strlen(char *str)
{
	int i = 0;
	for (; str[i] != '\0'; ++i);
	return (i);
}

int main()
{
	
	std::string sentence;
	std::string buff;

	while (std::cin >> buff) {
		sentence += buff;
	}
	std::cout << sentence;
	while (1);
	return 0;
}