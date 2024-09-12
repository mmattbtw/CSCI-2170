#include <iostream>

int main()
{

    // ternary time!!!!! <33333333
    // (conditional) ? expr1 : expr2;
    // ^^ the two expressions have to give back the same type..... or something that can be coerced into the other type..
    // iykwim.

    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;

    // if (num % 2 == 0)
    // {
    //     num = num / 2;
    // }
    // else
    // {
    //     num = num * 3 + 1;
    // }

    // next generation... incredible
    // amazing.... wow...
    // neeeeeed.... thissss
    num = (num % 2 == 0) ? num / 2 : num * 3 + 1;

    std::cout << num << std::endl;

    return 0;
}