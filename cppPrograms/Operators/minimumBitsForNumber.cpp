/*  PROGRAM TO COUNT MINIMUM BITS REQUIRED FOR A NUMBER */
#include <iostream>

int main() {
    int decimal {};
    std::cout << "Enter a number: ";
    std::cin >> decimal;
    int minimumBits {};
    while (decimal != 0) {
        if ((decimal & 1) == 1) {
            ++minimumBits;
        } else {
            ++minimumBits;
        }
        decimal = decimal >> 1;
    }

    std::cout << "Minimum bits required : " << minimumBits << '\n';

    return 0;

}