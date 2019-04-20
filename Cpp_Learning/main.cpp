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
	
	std::string line = "Hello world!";

	for (std::size_t i = 0; i != line.size() && !std::isspace(line[i]); ++i)
		line[i] = std::toupper(line[i]);
	std::cout << line;
	std::getchar();
	return 0;
}