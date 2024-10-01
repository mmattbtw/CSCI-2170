#include <iostream>
#include <string>

// how do we declare constants in c++
// const datatype x
// constexpr = constant expression
// it says that i can't change it.
// also means you are required to initialize it.

// if the function doesn't need to change the value of the parameter
// it should probably be const
void bad_name(const std::string &text);

int main()
{
    // what if it was 2gb of text..
    // pass by value means you copy it
    // so if you pass by value it you effectively use 4gb of memory
    // thats kind of bad yknow
    // in a situation like this, it might be better to pass by reference
    std::string text = "I heart Bladee";
    bad_name(text);
    std::cout << text << std::endl;
    return 0;
}

// can be accessed and read from but not changed.
//            vvvvv
void bad_name(const std::string &text)
{
    for (int i = 0; i < text.length(); i++)
    {
        // if (i % 2 == 0)
        // {
        //     text[i] = 'z';
        // }
        std::cout << text[i];
    }
    std::cout << std::endl;
}
