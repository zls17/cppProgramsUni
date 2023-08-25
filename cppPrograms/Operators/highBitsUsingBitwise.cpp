
/*          USING BITWISE OPERATIONS          */

#include <iostream>

int main() {
    int number {};
    std::cout << "Enter a number: ";
    std::cin >> number;
    int counter {};
    while (number != 0) {
        if ((number & 1) == 1) {
            ++counter;
        }
        number = number >> 1;
    }
    std::cout << counter << '\n';
}
