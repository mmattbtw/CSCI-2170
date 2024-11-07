#include <iostream>
#include "MyVector.h"

int main()
{
    MyVector one;

    one.push_back(10);
    one.push_back(10);
    one.push_back(10);

    one[0] = 4;
    one.at(1) = 2;
    // MyVector two{one};
    MyVector two;
    two = one;
    two.push_back(91239);
    two.push_back(912);
    two.push_back(91);

    one.insert(2, 3);

    std::cout << "One: ";
    for (int i{0}; i < one.size(); ++i)
    {
        std::cout << one.at(i) << ", ";
    }

    std::cout << std::endl;

    std::cout << "Two: ";
    for (int i{0}; i < two.size(); ++i)
    {
        std::cout << two.at(i) << ", ";
    }

    std::cout << std::endl;

    return 0;
}