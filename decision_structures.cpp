// decision structures :DDD:D:D:D::D:D:D::D:D:D:D
#include <iostream>

int main()
{
    // control flow
    // when a program runs the cpu starts at the top of main() and begins to execute in sequential order by default until the end of main.
    // this is the program's execution path, typically we don't want a program to always execute sequentially.
    // instead we use control flow statements to change that path

    // control flow statements
    // conditional statements, if & switch
    //      - conditional operator / expression "probably tomorrow"
    // jumps, goto, break & continue.
    // function calls, somefunc() & return
    // repetition statements, for, while, do-while, ranged-for, etc...
    // halts, std::exit & std::abort
    // exceptions, try, catch & throw

    // operators we need
    // logical, relational, and equality
    // operators used in boolean expressions
    // test for true or false
    // relational operators compare two expressions (less than and greater than vibes)
    // equality operators test for two expressions to be equal or not (=== vibes)
    // logical operators allow us to create compound boolean expressions (fun)

    // relational and equality operators
    // >
    // >=
    // <
    // <=
    // ==
    // !=
    // its just python Roflcopter except for precedence(?)

    // logical operators
    // ! (not), !(a > b)
    // && (and), (a >= b) && (b < c)
    // || (or), (a < b) || (a < c)
    // javascript vibes.... chills.....

    int a;
    int b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << std::boolalpha;

    // if you dont do () then it'll try to compare cout with the result of a>b......... c++ vibes....
    // you could also bring the comparison to another line like
    // bool result = a > b
    std::cout << (a > b) << std::endl;

    // a > b == b < c
    // works

    // ! (not) is super high up in precedence

    // not a > b
    // in python, checks if a is greater than b then flips it
    // not a and b
    // compares not a and then b(?)
    // () are never bad to add to grouping!!

    // in c++
    // ! a > b
    // it does the ! (not) first.
    // anything non zero is true, zero is false.
    // so no matter what is in a it converts it to a bool
    // so then it'll compare a (now a bool) to b (an int)

    std::cout << (!(a > b)) << std::endl;

    return 0;
}