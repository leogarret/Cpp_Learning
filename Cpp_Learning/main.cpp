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
	std::vector<std::string> tab;
	std::string buff;

	while (std::cin >> buff)
		tab.push_back(buff);
	for (auto &elem : tab) {
		for (auto &child : elem) {
			if (!std::isupper(child))
				child = std::toupper(child);
		}
	}
	unsigned i = 0;
	for (auto elem : tab) {
		if (i == 8) {
			std::cout << std::endl;
			i = 0;
		}
		std::cout << elem << " ";
		++i;
	}
	std::cout << std::endl;
	std::getchar();
	return 0;
}