#include <iostream>
#include <bitset>

/*
    PROGRAM TO COUNT NUMBER OF HIGH BITS IN A NUMBER
*/

/*    ** USING BITSET **      */

int main() {
    long long unsigned int decimal {};
    std::cout << "Enter a number: ";
    std::cin >> decimal;
    std::bitset<8> binary {decimal};
    int highCounter {};
    std::cout << '\n' << decimal << " in binary is: " << binary << '\n';
    for (int i = 0; i <= 7; i++) {
        if (binary[i] == 1) {
            ++highCounter;
        }
    }
    std::cout << "\nNumber of high bits in " << decimal << " are: " << highCounter << '\n';
    return 0;

}
