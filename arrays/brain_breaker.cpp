#include <iostream>

const int kMaxSize = 5;

int main()
{
    // arrays time
    // idea of containers
    // in programming there are generally a tool to manage, update, and manipulate objects (generic variable type of thing)
    // in python, you could use a list, string is also a container (a string isn't considered a container in c++ but whateva)

    // arrays
    // 1. contiguous in memory
    //      - when we think about memory in our program, when we request for an array we are asking for a sequence of elements
    //      - that are all the same size, and live next to each other in memory, there are no gaps in the memory either.
    // 2. the name of the array we should think of as the first address
    //      - how do we index stuff, iterate through it and we use an operator
    //      - 0, 1, 2, 3, 4, etc.
    //      - relationship between the index values and the address
    //      - in c++ every single element in the array has the same type.
    //      = types tell us how much memory it uses
    // 3. fixed size

    // limitations
    // everything same type
    // fixed in size, at compile time you need to know exactly how much space you want. can't change as program runs
    // in c++, there are two different ways you can work with it
    // theres the c way, and the c++ way
    // you should use the c++ way but you have to know the c way for when the c++ way doesn't work

    // C Style
    // type name[constant size]
    // you can also do [5] btw its fine
    int numbers[kMaxSize] = {3};
    // this prints out the memory address
    // std::cout << numbers << std::endl;

    // if you have a list of strings (with a list as a char) then you have to make sure that your memory is big enough to hold every character of a string as well as the \0 from a string literal
    char letters[kMaxSize + (kMaxSize * 2)] = {'a', 'b', 'c', 'd', 'e'};

    // std::string strings[kMaxSize] = {"apple", "banana", "cherry", "date", "elderberry"};

    for (int i = 0; i < kMaxSize; i++)
    {
        // points to that address
        //                  vvv
        numbers[i] = i;
        std::cout << numbers[i] << std::endl;
        std::cout << letters[i] << std::endl;
    }

    return 0;
}