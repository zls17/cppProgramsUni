#include <iostream>

double getNumber() {
    double temp {};
    std::cout << "Enter a number: ";
    std::cin >> temp;
    return temp;
}

int main() {
    double x {getNumber()};
    double y {getNumber()};

    try {
        if (y == 0) {
            throw x;
        }
        std::cout << x / y << '\n';
    }
    catch (double x) {
        std::cerr << "Trying to divide by zero!\n";
    }

}
