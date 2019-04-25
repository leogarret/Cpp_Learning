#include <iostream>
#include <string>
#include <vector>

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

int main()
{
	int ia[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	int(*pt)[4] = ia;

	for (; pt != std::end(ia); ++pt) {
		for (int elem = 0; pt[elem] != std::end(*pt); ++elem)
			std::cout << pt[elem] << std::endl;
	}
	std::getchar();
	return 0;
}