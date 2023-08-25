#include <iostream>

int main(int argc, char** argv) {
    int subjects {};
    std::cout << "Enter number of subjects: ";
    std::cin >> subjects;
    double marks[subjects];
    for (int i = 1; i <= subjects; i++) {
        std::cout << "Enter marks in subject " << i << ": ";
        std::cin >> marks[i];
    }
    double sum {};
    for (int i = 0; i <= subjects; i++) {
        sum += marks[i];
    }
    double average {static_cast<double>(sum / subjects)};
    double percentage {(sum / (subjects * 100)) * 100};
    std::cout << "Percentage: " << percentage << '\n';
    if (average > 90) {
        std::cout << "Grade: O\n";
    } else if (average > 80 && average < 90) {
        std::cout << "Grade: A+\n";
    } else if (average > 70 && average < 80) {
        std::cout << "Grade: A";
    } else if (average > 60 && average < 70) {
        std::cout << "Grade: B+";
    } else if (average > 50 && average < 60) {
        std::cout << "Grade: B";
    } else if (average > 40 && average < 50) {
        std::cout << "Grade: C";
    } else {
        std::cout << "Grade: F";
    }
    
    return 0;

}


