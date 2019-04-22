#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<int> arr = { 1, 34, 56, -4, 33 };
	std::vector<int> arr2 = { 1, 34, 56, -4, 34 };

	if (arr.size() == arr2.size()) {
		for (int i = 0; &arr[i] != &arr[arr.size()]; ++i) {
			if (arr[i] != arr2[i]) {
				std::cout << "Arrays are not equals!" << std::endl;
				std::getchar();
				return 0;
			}
		}
		std::cout << "Arrays are equals!" << std::endl;
		std::getchar();
		return 0;
	}
	std::cout << "Arrays are not equals!" << std::endl;
	std::getchar();
	return 0;
}