#include "src/bitwise.h"
#include <iostream>


int main(void)
{
	short a = 10;
	short b = 10;

	std::cout << "Before\t" << a << std::endl;
	devVal(a, 2);
	std::cout << "after\t" << a << std::endl;

	return 0;
}