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
	std::vector<std::string> s = { "SA", "BC", "CE", "Coucou" };
	std::vector<std::string>::iterator it = s.begin();

	std::cout << "This vector is holding " << s.size() << " element(s):" << std::endl;
	for (; it != s.end(); ++it) {
		std::cout << *it;
		(it + 1 != s.end()) ? std::cout << ", " : std::cout << ".";
	}
	std::cout << std::endl;
	std::getchar();
	return 0;
}