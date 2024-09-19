#include <iostream>

int main()
{
    int x;
    x = 3;

    std::cout << x << std::endl;
    x = x + 1;
    std::cout << x << std::endl;
    x += 1;
    std::cout << x << std::endl;
    x++;
    std::cout << x << std::endl;
    ++x;
    std::cout << x << std::endl;

    std::cout << "\n"
              << std::endl;

    // outputs 8 9 9 11
    // x++ incrememnts the number after, even though precedence is higher
    std::cout << (x = x + 1) << std::endl;
    std::cout << (x += 1) << std::endl;
    std::cout << x++ << std::endl;
    std::cout << ++x << std::endl;

    std::cout << "\n"
              << std::endl;
    std::cout << x << std::endl;

    int result;
    result = ++x * 2;
    std::cout << result << " | " << x << std::endl;

    return 0;
}