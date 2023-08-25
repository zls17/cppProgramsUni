#include <iostream>

int main() {
    int num {};
    std::cout << "Enter a number: ";
    std::cin >> num;
    int clearBit {};
    std::cout << "Enter the bit to be cleared: ";
    std::cin >> clearBit;
    int result {num & ~(1 << clearBit)};
    std::cout << "Decimal after bit " << clearBit << " is removed " << result << '\n';
}
