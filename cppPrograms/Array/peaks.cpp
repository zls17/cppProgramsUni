/* Finding peaks*/


// 1 5 2 0 6 5 8 4 0 1 0 10 6


#include <iostream>

int main() {
    int size {};
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter number " << i << " : ";
        std::cin >> numbers[i];
    }
    std::cout << '\n';
    for (int i = 1; i < size - 1; ++i) {
        if ((numbers[i] > numbers[i - 1]) && (numbers[i] > numbers[i + 1])) {
            std::cout << numbers[i] << " is a peak.\n";
        } else {
            std::cout << numbers[i] << " is not a peak.\n";
        }
    }

}