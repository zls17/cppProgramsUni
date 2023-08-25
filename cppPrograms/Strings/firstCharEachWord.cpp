
#include <iostream>

int main() {
    std::string user {};
    std::cout << "Enter a string: ";
    std::getline(std::cin >> std::ws, user);
    std::string final {};
    for (int i = 0; user[i] != '\0'; ++i) {
        if (i == 0) {
            final += user[i]; 
        }
        if (user[i] == ' ') {
            final += user[i+1];
        }
    }
    std::cout << "The first characters of each word is: " << final << '\n';
}