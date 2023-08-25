#include <iostream>

int main()
{
    int number{};
    int howMany{};
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "How many multiples do you want: ";
    std::cin >> howMany;
    int counter{};
    std::cout << "\nUsing While Loop\n\n";
    while (counter < (howMany + 1))
    {
        std::cout << number << " x " << counter << " = " << number * counter << '\n';
        ++counter;
    }
    std::cout << "\nUsing For Loop\n\n";
    for (int i = 0; i < (howMany + 1); ++i)
    {
        std::cout << number << " x " << i << " = " << number * i << '\n';
    }

    int doCounter{};
    std::cout << "\nUsing do-while loop\n\n";
    do
    {
        std::cout << number << " x " << doCounter << " = " << number * doCounter << '\n';
        ++doCounter;
    } while (doCounter < (howMany + 1));

    return 0;
}
