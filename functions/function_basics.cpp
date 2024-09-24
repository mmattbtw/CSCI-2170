#include <iostream>
#include <string>
#include "mystuff.h"

// what are the things every function requires in c++
// a return type and an identifier, and a parameter list

// function definition
// vvvvvvvvvvvvvvvvvvv
// ReturnType identifier (parameter list) { <--- function header
// body of the function
// }

// void means it won't return any value back
// it might return early in the function but its not going to return any data
void print_greeting()
{
    std::cout << "Hello World!" << std::endl;
    return;
}

// function prototypes
// a way for us to forward declare the existance of a function to the compiler without knowing how a function works
// effectively the function's header at the top
// doens't require all the information needed in the header
// cares about the return type, the name, and the types of the parameters
// they have to match, and its the way we do things
// because of projects with more lines of code, we often seperate things out
// so they might get moved out into a header file
// so having this all in one file isn't great.... which is why you split it up iykwim

void print_greeting2(std::string, std::string);

// how do we get things back from functions tho...
std::string string_prompt(std::string);

// & = passing by reference
//
void print_greeting5(std::string &, std::string &);

// (main is required by c++)
// int is the return type, main is the identifier
int main()
{
    // std::getline() is a function
    // same with all the math stuff

    // in python you told the program when main would start
    // in c++ during the compilation process part of checking for syntax is "forward declaration"
    // when you want to use a variable in c++ you have to declare it before hand
    // same idea with a function, you'll have to declare before hand so the compiler can figure it out
    std::string name, color;

    print_greeting();
    // std::cout << "What's your name tho: ";
    // std::getline(std::cin, name);
    // std::cout << "Wait.... but what color: ";
    // std::getline(std::cin, color);

    name = string_prompt("What's your name tho: ");
    color = string_prompt("Wait.... but what color: ");

    // order matters babes
    print_greeting2(name, color);
    std::cout << "AFTER: " << name << " | " << color << std::endl;
    print_greeting5(name, color);
    std::cout << "AFTER: " << name << " | " << color << std::endl;
    print_greeting3();

    int a = 7;
    int b = 8;
    std::cout << a << " | " << b << std::endl;
    // a, b = b, a;
    // is really a, b, a;
    // lookup commas in c++
    // a = 3, b, std::cout << a;
    // commas do not do what they did in python!!!!!
    // reason he's showing this is because if you want to return in a function with two strings
    // like this : return "1", "2";
    // you end up only really returning "2";

    return 0;
}

// parameters (type variable_name)

// biggest mistake is assuming the variables are the same thing...
// i'm guessing he's gonna go on about scope
// i was right

void print_greeting2(std::string name, std::string color)
{
    // local variable so it won't change after return
    // vvvvvvvvvv
    name[0] = 'Z';
    std::cout << "Hello " << name << "!!!" << std::endl;
    std::cout << "oh wow mama boots the house down with " << color << " oh wow like thats revolutionary I can't believe my life" << std::endl;
    return;
}

void print_greeting3()
{
    std::cout << "Hello from header file!!" << std::endl;
    return;
}

std::string string_prompt(std::string prompt)
{
    std::string response;

    std::cout << prompt;
    std::getline(std::cin, response);

    return response;
}

// what if you wanted it to change those variables and persist them
// by doing the & its saying its a direct alias to the variable being passed in
// not creating a local variable (well like it is but like yknow...... its an alias to the one being passed in as i said)
// no local memory being updated, its going directly to the other variable in memory
void print_greeting5(std::string &name, std::string &color)
{
    name[0] = 'Z';
    std::cout << "haiii " << name << std::endl;
    color[0] = 'Z';
    std::cout << "er me gerd " << color << " is so iconic" << std::endl;
    return;
}