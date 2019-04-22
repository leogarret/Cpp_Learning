#include <iostream>
#include <string>
#include <vector>

int main()
{
	int arr[] = { 23, 45, 67, -45, 34, 32, -5, 7 };
	int arr2[] = { 23, 45, 67, -45, 34, 32, -5, 8 };
	int* end = std::end(arr);

	if (std::size<int>(arr) == std::size<int>(arr2)) {
		for (int i = 0; &arr[i] != end; ++i) {
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