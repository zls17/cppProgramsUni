
/* Program to count total characters in a string*/


#include <iostream>

int main() {
    std::string user {};
    std::cout << "Enter: ";
    std::getline(std::cin >> std::ws, user);
    int totalChars {};
    int spaces {};
    for (int i = 0; user[i]; ++i) {
        if (user[i] == ' ') {
            spaces++;
        } else {
            totalChars++;
        }
    }
    std::cout << "There are total " << totalChars + spaces << " characters in " << user << "\n";
    std::cout << "There are total " << totalChars << " characters in " << user << " without spaces.\n";
}
