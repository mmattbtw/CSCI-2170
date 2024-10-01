#include <iostream>
#include <string>
// for std::exit
#include <cstdlib>

// default arguments / parameters
// they default the value of the argument if not given
// void greeting(int age, std::string name = "Stranger");
void greeting(std::string name, int age = 0);

// you could do function overloading
// void greeting(int) & void greeting(string)
// but you want it to have the same behavior

int main()
{
    // greeting(31, "Billy");
    greeting("Billy", 31);

    // greeting(31);
    greeting("Billy");

    return 0;
}

void greeting(std::string name, int age)
{
    if (age == 0)
    {
        // 0 = success
        // 1 = failure
        // dumb because t/f but Whateva
        // not returning, but kills the whole program.
        std::exit(1);
    }
    if (age > 30)
    {
        std::cout << "old " << name << std::endl;
    }
    else
    {
        std::cout << "hai " << name << std::endl;
    }
}