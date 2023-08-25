
#include <iostream>

int main() {
    
    // standard string 
    std::cout << "Standard String: \n";
    std::string user {};
    std::cout << "Enter something: ";
    std::getline(std::cin >> std::ws, user);
    std::cout << "You entered: " << user << '\n';

    // C-style string
    std::cout << "\nC-Style String: \n";
    char name[25] {};
    std::cout << "Enter something again: ";
    std::cin.get(name, 25);
    std::cout << "You entered: " << name << '\n';
    
}