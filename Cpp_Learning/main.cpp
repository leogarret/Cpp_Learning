#include <iostream>

typedef struct Sales_data {
	std::string book_no;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	int a = 3, b = 4;
	decltype(a = b) c = a;
	Sales_data data = { "AZ243", 12, 34.5 };

	std::cout << data.book_no << std::endl;
	getchar();
	return 0;
}