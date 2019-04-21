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
	std::vector<int> vec = { 12, 34, 56, 21, 2, 56, 45, 98, 0, 27 };
	auto mid = vec.begin() + vec.size() / 2;
	auto it = vec.begin();

	it += 6;
	std::cout << (mid < it) << std::endl;
	std::getchar();
	return 0;
}