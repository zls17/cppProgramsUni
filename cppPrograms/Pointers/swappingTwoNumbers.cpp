/* Swapping two numbers */

#include <iostream>
void swap(int *a, int *b);

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a {};
    int b {};
    std::cout << "Enter value of a: ";
    std::cin >> a;
    std::cout << "Enter value of b: ";
    std::cin >> b;
    std::cout << "\nAfter Swap\n";
    swap(&a, &b);
    std::cout << "a is: " << a << "\nb is: " << b << '\n';
    return 0;

}