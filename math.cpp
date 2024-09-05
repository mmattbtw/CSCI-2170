#include <iostream>

int main()
{
    // types of operators
    // unary
    //      - act on one operand (input value)
    //      - ex: negation (-5) takes the operant 5 and flips the sign to produce -5

    // binary
    //      - act on two operands (input values)
    //      - often referred to as left and right operands relative to which side of the operator they are on
    //      - ex: addition (3+5) takes the left oeprand, 3, and the right operand, 5, and applies the addition operation to produce the result, 8.

    // ternary
    //      - act on three operands
    //      - only one in c++ - conditional operator

    // nullary

    // return values & side effects
    // most operators use the operands to calculate a return value
    // some operators don't produce return values

    // some operators have side effects, where they do something beyond just producing a value.
    //      - assignment (x=10), the expression is evalusated and the side effect is the storing of the value 10 in x, but the return value is x
    //      - insertion (std::cout << 10), where 10 is printed to the console as a side effect, after 10 is inserted into the stream but the return value is std::cout

    // operator chaining
    // the result of one operator can be used as an input for another (3*5+2)

    // operator precedence
    // higher precedence stuff is done first, lower is done later.
    // think pemdas but include every possible operator in c++
    // cppreference.com

    // math operators
    // lower number for precedence means higher

    // a = b = c = 10; right to left
    // assigns 10 to c, copies from c to b, from b to a

    // c += 2 * b;
    // evalutates 2 * b then adds the result to c

    // headers for math functions and constants
    // <cmath> and <cstdlib>
    // <cstdlib> has abs(int) - absolute value for ints

    // <cmath>
    // pow(expr, power) for exponentiation
    // sqrt(expr)

    // implicit type conversion aka coercion
    // automatic type conversion, we can't tell it not to do it, it happens based on the datatypes we've chosen
    // math expects both operands to be the same type
    // if the type of at least one of the operands is on the priority list, the operand with lower priority will convert into higher prio (?)

    // / works differently in c++ compared to python due to type coercion
    // 5 / 2 = 2 in c++ NOT 2.5.

    // explicit type conversion aka type casting
    // static_cast<type>(expression)
    // c++ introduces static_cast as the tool to convert a value from one type to another.

    // his program does int a {2} but for some reason i get an error sooooooo i'm just doing this
    // math.cpp:39:10: error: expected ';' at end of declaration
    // int c{32};
    //      ^
    //      ;
    // if someone can figure that out go crazy
    // ➜  CSCI 2170 git:(main) ✗ g++ --version
    // Apple clang version 15.0.0 (clang-1500.3.9.4)
    // Target: arm64-apple-darwin23.6.0
    // Thread model: posix
    // InstalledDir: /Library/Developer/CommandLineTools/usr/bin

    int a;
    int b;
    int c;
    a = 2;
    b = 4;
    c = 32;

    // std::cout << a * 3 > b << '\n';
    // ^ no operator ">" matches these operands ^
    // "I can't compare cout to see if its greater than an int."
    // Comparison is lower than insertion.
    // a*3 = 6, 6 gets inserted into cout, then tries to compare b to the answer of inserting 6 into cout.

    // how do we fix!!
    std::cout << (a * 3 > b) << std::endl;

    std::cout << (c += a * 3 > b) << std::endl;

    return 0;
}