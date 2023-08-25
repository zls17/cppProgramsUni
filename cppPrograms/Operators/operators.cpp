#include <iostream>

/*
* Different Operators in c++
* PRN: 22070123030
*/


int main() {
    int num1 {1};
    int num2 {2};
    std::cout << "\nArithmetic Operators\n";
    std::cout << "num1 + num2:\t" << num1 + num2 << '\n';
    std::cout << "num1 - num2:\t" << num1 - num2 << '\n';
    std::cout << "num1 / num2:\t" << static_cast<double>(num1) / static_cast<double>(num2) << '\n';
    std::cout << "num1 * num2:\t" << num1 * num2 << '\n';
    std::cout << "num1 % num2:\t" << num1 % num2 << '\n';

    std::cout << "\nRelational Operators\n";
    std::cout << "num1 == num2\t" << (num1 == num2) << '\n';
    std::cout << "num1 != num2\t" << (num1 != num2) << '\n';
    std::cout << "num1 >= num2\t" << (num1 >= num2) << '\n';
    std::cout << "num1 <= num2\t" << (num1 <= num2) << '\n';
    std::cout << "num1 > num2\t" << (num1 > num2) << '\n';
    std::cout << "num1 < num2\t" <<  (num1 < num2) << '\n';

    bool cond1 {true};
    bool cond2 {false};

    std::cout << "\nLogical Operators\n";
    std::cout << "num1 && num2:\t" << (cond1 && cond2) << '\n';
    std::cout << "num1 || num2:\t" << (cond1 || cond2) << '\n';

    int larger {};

    larger = (num1 > num2) ? num1 : num2;

    std::cout << "\nArithmetic if Operator (?:)\n" << larger << '\n';

    std::cout << "\nIncrement/Decrement Operators\n";
    
    int z {num1++};
    int k {--num2};
    std::cout << "num1++\t" << z << '\n';
    std::cout << "--num2\t" << k << '\n';

    std::cout << "\nAssignment Operators\n";
    int number4 {num1 *= num2};
    int number5 {num1 += num2};
    int number6 {num1 /= num2};
    std::cout << "num1 *= num2\t" << number4 << '\n';
    std::cout << "num1 += num2\t" << number5 << '\n';
    std::cout << "num1 /= num2\t" << number6 << '\n';
    std::cout << std::endl;

    return 0;
}