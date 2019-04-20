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
	const std::string hex = "0123456789ABCDEF";

	std::cout << "Enter a serie of digits and hit enter whene you have finished" << std::endl;

	std::string result;
	unsigned n = 0;
	while (std::cin >> n) {
		if (n < hex.size())
			result += hex[n];
	}
	std::cout << result << std::endl;

	while (1);
	return 0;
}