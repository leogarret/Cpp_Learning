#include <iostream>
#include "Sales_item.h"
#include <cstring>

int strlen(char *str)
{
	int i = 0;
	for (; str[i] != '\0'; ++i);
	return (i);
}

int main()
{
	
	std::string line = "Hello world!";

	for (char &c : line) {
		if (c = std::toupper(c))
			std::cout << c;
	}
	std::cout << std::endl << line;
	std::getchar();
	return 0;
}