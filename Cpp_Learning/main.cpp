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
	std::string word = "hello";

	if (word.begin() != word.end()) {
		auto it = word.begin();
		it++;
		*it = std::toupper(*it);
	}
	std::cout << word << std::endl;
	std::getchar();
	return 0;
}