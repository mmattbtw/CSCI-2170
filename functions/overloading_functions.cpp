#include <iostream>
#include <string>
#include <iomanip>

// function overloading
// its the reason of behaviors of certain things in c++
// why namespace std is bad on one level
// when we get to oop its what enables us to do certain things like
// make it so we can add 2 custom data structs together

// functions in c++ can have the same name, as long as their signatures are different.

// function signature
// |vvvvvvvvvvvv|
int add(int, int);
// |^^^^^^^^^^^^|
// function signature

float add(float, float);

void print(std::string msg, int first, int second, int result);
// better option would just be to let it be floats but whateva
void print(std::string msg, float first, float second, float result);

int main()
{
    int x, y;
    float a, b;

    std::cout << "Enter x and y: ";
    std::cin >> x >> y;

    std::cout << "Enter a and b: ";
    std::cin >> a >> b;

    int result;
    result = add(x, y);
    print("", x, y, result);

    float result2;
    result2 = add(a, b);
    print("", a, b, result2);

    // this shit dont work (without another function) because its an ambiguous call
    // compiler won't make this decision for you in function overloading.
    // result2 = add(a, x);
    // print("", a, x, result2);

    return 0;
}

int add(int one, int two)
{
    std::cout << "int add" << std::endl;
    return one + two;
}

float add(float one, float two)
{
    std::cout << "float add" << std::endl;
    return one + two;
}

void print(std::string msg, int first, int second, int result)
{
    std::cout << msg << first << " + " << second << " = " << result << std::endl;
    return;
}

void print(std::string msg, float first, float second, float result)
{
    // well I mean I guess you could make it enable fixed point when using a float type with overloading
    // saur...
    std::cout << std::fixed << std::setprecision(2);
    std::cout << msg << first << " + " << second << " = " << result << std::endl;
    return;
}