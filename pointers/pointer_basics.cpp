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

    one = &x;

    return 0;
}