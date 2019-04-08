#pragma once
#include <iostream>
using namespace std;

class my_int
{
public:
	int value;
	my_int(int value) { this->value = value; }

	void operator=(int eq) { value = eq; }
	void operator+(int add) { value += add; }
	void operator*(int mul) { value *= mul; }
	void operator/(int div) { value /= div; }
	void operator%(int mod) { value /= mod; }
	void operator>>(int eq) { value = eq; }
};

