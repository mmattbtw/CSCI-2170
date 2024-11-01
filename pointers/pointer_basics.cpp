#include <iostream>

// alias tool
typedef int *IntPtr;

int main()
{

    // a pointer is a variable that can hold an address
    // * indirection(?)
    // % address-of
    // -> member access

    // type*

    int x = 100;
    int *one{nullptr};
    int *two{nullptr};

    std::cout << one << std::endl;
    std::cout << one << " -- " << two << std::endl;
    std::cout << x << " -- " << &x << std::endl;

    one = &x;

    std::cout << one << " -- " << *one << std::endl;
    // indirection (*one) is almost like a "get value"
    *one = 1000;
    std::cout << *one << std::endl;
    std::cout << *one * 3 << std::endl;

    return 0;
}