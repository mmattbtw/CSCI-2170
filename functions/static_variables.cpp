#include <iostream>

void do_something();

// could do a global variable
// but then its accessible, mutable, everywhere in the program.
// int count = 0;

int main()
{
    for (int count = 0; count < 10000; ++count)
    {
        do_something();
    }
    return 0;
}

void do_something()
{
    // static makes it so that the function stays local in the variable
    // BUT, it stays in memory with the global / static allocated memory
    static int count = 0;
    std::cout << "I have been called " << ++count << " number of times. " << std::endl;
}