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
    std::cout << "f_n for int type" << std::endl;
    std::cout << "n\tf_n" << std::endl;
    std::cout << "-----------" << std::endl;
    for (unsigned int n = 0; n < 4; ++n) {
        std::cout << n << "\t" << fn_int(n) << std::endl;
    }
}