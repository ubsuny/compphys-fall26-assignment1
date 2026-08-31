#include <iostream>

int fn_int(unsigned int n) {
	int returnval = 0;
	if (n == 0) {
		returnval = 2;
	} else {
		int fn_minus_one = fn_int(n-1);
		returnval = fn_minus_one * fn_minus_one;
	}
	return returnval;
}

int main(void) {
	std::cout << "int" << std::endl;
	for (unsigned int n = 0; n < 8; ++n) {
		std::cout << fn_int(n) << std::endl;
	}
}