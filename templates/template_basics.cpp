#include <iostream>
#include <string>

template <typename T1, typename T2>
struct Pair
{
    T1 first;
    T2 second;
};

template <typename T>
void swap(T &one, T &two)
{
    T temp = one;
    one = two;
    two = temp;
}

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename T1, typename T2>
int largest(const T1 &first, const T2 &second)
{
    if (sizeof(first) > sizeof(second))
    {
        std::cout << "ERROR: first is too big" << std::endl;
        return sizeof(first);
    }
    std::cout << "Second is larger" << std::endl;
    return sizeof(second);
}

template <int reps>
void print()
{
    for (int i{0}; i < reps; i++)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    int a = 1;
    int b = 2;
    std::cout << a << " " << b << std::endl;
    swap(a, b);
    std::cout << a << " " << b << std::endl;

    double c = 42.03;
    double d = 23.12;
    std::cout << c << " " << d << std::endl;
    swap(c, d);
    std::cout << c << " " << d << std::endl;

    largest(a, c);

    print<8>();

    Pair<double, std::string> numberword{420, "sixty nine"};

    return 0;
}