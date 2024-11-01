#include <iostream>

void swap(int *a, int *b)
{
    // swaps the address
    int temp = *a;
    *a = *b;
    *b = temp;
}

int *create_array()
{
    int temp[5]{1, 2, 3, 4, 5};
    return temp;
}

int main()
{
    int x{10};
    int y{20};
    std::cout << x << " - " << y << std::endl;

    swap(&x, &y);

    std::cout << x << " - " << y << std::endl;

    int *something;
    something = create_array();
    for (int i{0}; i < 5; i++)
    {
        std::cout << something[i] << std::endl;
    }

    return 0;
}