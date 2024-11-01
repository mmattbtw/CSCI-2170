#include <iostream>

int main()
{
    const int size{5};
    int numbers[size]{10, 20, 30, 40, 50};

    int *curr{nullptr};
    curr = numbers;

    std::cout << numbers << std::endl;
    std::cout << curr << std::endl;

    return 0;
}