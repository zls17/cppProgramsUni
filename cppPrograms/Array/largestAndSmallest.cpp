
/* Largest Number And Smallest Number*/

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

    int smallest {};
    int largest {};

    smallest = numbers[0];
    largest = numbers[0];
    for (int i = 0; i < size; ++i) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        } else if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    std::cout << "\nLargest Number is: " << largest << '\n';
    std::cout << "Smallest Number is: " << smallest << '\n';

}
