#include <iostream>

void evenOdd(int num) {
    if ((num & 1) == 0) {
        std::cout << num << " is even.\n";
    }
    else {
        std::cout << num << " is odd.\n";
    }
}

int main() {
    int num1 {};
    while (std::cin) {
        std::cout << "Enter a number: ";
        std::cin >> num1; 
        evenOdd(num1);
    }
    return 0;
}