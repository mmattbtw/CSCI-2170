#include <iostream>

void swap(int &, int &);

int main()
{

    int x, y;
    std::cout << " Enter x and y: ";
    std::cin >> x >> y;

    std::cout << x << ", " << y << std::endl;
    swap(x, y);
    std::cout << x << ", " << y << std::endl;

    return 0;
}

void swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
    return;
}