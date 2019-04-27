#include <iostream>
#include <string>
#include <vector>

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

int main()
{
	std::cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;
	std::getchar();
	return 0;
}