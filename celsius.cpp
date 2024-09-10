#include <iostream>

int main()
{
    double f;
    double c;

    int a;
    int b;
    a = 5;
    b = 9;

    std::cout << "Enter temp in F: ";
    std::cin >> f;

    // if you need double divided by something to do this, you could static_cast... or
    // c = (static_cast<double>(a) / b) * (f - 32);

    // you could rewrite your expression so that when using () and the compiler will make it so its double minus int, then it converts the int to a double
    // int * double, converts to double * double
    // double / int, will convert it to double / double
    // just because you use a certain order could mean you get implicit type coersion.......
    c = (a * (f - 32)) / b;

    std::cout << "Celcius: " << c << std::endl;
    return 0;
}