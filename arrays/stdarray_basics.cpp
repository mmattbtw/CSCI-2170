#include <iostream>
// Oh Wow
#include <array>

const int kMaxSize = 7;

void fill(std::array<int, kMaxSize> &arr, int size);
void print_array(const std::array<int, kMaxSize> &arr, int size);
std::array<int, kMaxSize> create_array(int size);

int main()
{

    // std::array<tyle, maxsize> name {};
    std::array<int, kMaxSize> numbers = {};
    fill(numbers, kMaxSize);

    // vvvv doesn't work vvvv
    // std::cout << numbers << std::endl;

    // to print address
    std::cout << &numbers << std::endl;
    std::cout << "-------------------------" << std::endl;
    print_array(numbers, kMaxSize);

    std::cout << std::endl;

    std::array<int, kMaxSize> other;
    other = numbers;
    // other[0] = 1;
    std::cout << &other << std::endl;
    std::cout << "-------------------------" << std::endl;
    print_array(other, kMaxSize);

    if (other == numbers)
    {
        std::cout << "Equal" << std::endl;
    }
    else
    {
        std::cout << "Nope" << std::endl;
    }

    std::array<int, kMaxSize> special;
    std::cout << std::endl;
    std::cout << &special << std::endl;
    std::cout << "-------------------------" << std::endl;

    special = create_array(kMaxSize);
    print_array(special, kMaxSize);

    return 0;
}

std::array<int, kMaxSize> create_array(int size)
{
    std::array<int, kMaxSize> arr;
    fill(arr, kMaxSize);
    return arr;
}

void print_array(const std::array<int, kMaxSize> &arr, int size)
{
    for (int i = 0; i < kMaxSize; i++)
    {
        std::cout << &arr.at(i) << " | " << arr.at(i) << std::endl;
    }
}

void fill(std::array<int, kMaxSize> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        // arr[i] = i;
        arr.at(i) = i;
    }
}