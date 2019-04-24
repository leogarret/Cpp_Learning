#include <iostream>
#include <string>
#include <vector>

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

int main()
{
	int arr[5] = { 23, 45, 65, 89, 32 };
	std::vector<int> vec(arr, std::end(arr));

	int arr2[5];
	int i = 0;
	for (auto elem : vec) {
		arr[i] = elem;
		++i;
	}
	for (auto elem : vec)
		std::cout << elem << std::endl;
	std::getchar();
	return 0;
}