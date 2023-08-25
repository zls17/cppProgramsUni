
/* Searching of element in array */

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

    int search {};
    std::cout << "Enter the number to search: ";
    std::cin >> search;
    int flag {};
    for (int i = 0; i < size; i++) {
        if (search == numbers[i]) {
            std::cout << "Search Successful! " << search << " was found at index position " << i << '\n';
            flag = 1;
        }
    }
    if (!flag) {
        std::cout << "Search unsuccessful! Item not found.";
    }

    return 0;

}
