#include <iostream>
#include <string>
#include <vector>

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

int main()
{
	int arr[4] = { 45, 67, 34, 21 };
	std::vector<int> vec = { arr, std::end(arr) };

	for (auto elem : vec)
		std::cout << elem << std::endl;
	std::getchar();
	return 0;
}