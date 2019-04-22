#include <iostream>
#include <string>
#include <vector>

int main()
{
	int arr[] = { 23, 45, 67, -45, 34, 32, -5, 8 };
	int* ptr = arr;
	int* ptr2 = std::end(arr);

	while (ptr < ptr2) {
		std::cout << *ptr << std::endl;
		++ptr;
	}
	std::getchar();
	return 0;
}