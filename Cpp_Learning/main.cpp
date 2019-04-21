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
	std::vector<std::string> s = { "salut je m'appelle Leo", "bonjour je mange du poulet", "yo c'est ninho!", "coucou je suis coucou" };

	for (auto &elem : s) {
		for (int i = 0; !std::isspace(elem.at(i)) && i < elem.size(); ++i) {
			if (!std::isupper(elem.at(i)))
				elem[i] = std::toupper(elem.at(i));
		}
	}
	for (auto elem : s)
		std::cout << elem << std::endl;
	std::getchar();
	return 0;
}