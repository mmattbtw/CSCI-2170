#include <iostream>
class Rectangle
{
private:
    int length;
    int width;
    int area;

    int x;
    int y;

public:
    void set_y(int y)
    {
        if (y > 1000)
        {
            return;
        }
        else
        {
            this->y = y;
        }
    }
    int get_y()
    {
        return this->y;
    }
};

int main()
{
    Rectangle r;
    // r.y = 1000;
    r.set_y(1001);

    // draw(r);
    std::cout << r.get_y() << std::endl;

    r.set_y(10);
    std::cout << r.get_y() << std::endl;

    return 0;
}