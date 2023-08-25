#include <iostream>

int main() {
    int x {5};
    int *y {&x};
    std::cout << "x:\t\t\t\t" << x << '\n';
    std::cout << "dereferencing the pointer (*y):\t" << *y << '\n';
    std::cout << "Address of x:\t\t" << &x << '\n';
    std::cout << "y:\t\t\t" << y << '\n';
    std::cout << "Address of y:\t\t" << &y << '\n';
}
