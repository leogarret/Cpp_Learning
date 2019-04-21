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
	std::vector<std::string> s = { "SA", "BC", "CE" };
	std::vector<std::string>::iterator it = s.begin();

	std::cout << "This vector is holding " << s.size() << " element(s):" << std::endl;
	for (; it != s.cend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::getchar();
	return 0;
}