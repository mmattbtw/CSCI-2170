#include <iostream>

// global
int count = 99;

void simple() {
    // will use global
    std::cout << count << std::endl;
}

int main()
{
    std::cout << count << std::endl;
    // will use local from here on
    int count = 7;
    std::cout << count << std::endl;
    simple();

    return 0;
}