#include <iostream>

int main()
{
    int *ptr;

    // new goes out to heap and gets an int's worth of space and returns the address to the pointer.

    ptr = new int;

    *ptr = 40;

    std::cout << *ptr << std::endl;

    // gives memory back to computer
    delete ptr;

    return 0;
}