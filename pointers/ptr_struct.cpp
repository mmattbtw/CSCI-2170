#include <iostream>

struct Coordinate
{
    int x;
    int y;
};

int main()
{
    Coordinate my_point{100, 200};
    Coordinate *ptr{nullptr};

    ptr = &my_point;

    std::cout << ptr << std::endl;

    std::cout << ptr->x << std::endl;
}