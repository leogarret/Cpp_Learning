#include <iostream>
#include <string>
#include <vector>

int _arr[10];

int main()
{
	int arr[10] = {};
	int arr2[10] = {};

	for (int i = 0; i < 10; ++i)
		arr[i] = i;
	for (int i = 0; i < 10; ++i)
		arr2[i] = arr[i];
	for (auto elem : arr2)
		std::cout << elem << std::endl;
	std::getchar();
	return 0;
}