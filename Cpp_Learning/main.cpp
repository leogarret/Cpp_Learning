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
	std::vector<std::string> list;
	std::string word;

	while (std::cin >> word)
		list.push_back(word);
	for (auto elem : list) {
		std::cout << elem << " ";
	}
	std::getchar();
	return 0;
}