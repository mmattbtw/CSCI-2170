#include <iostream>

const int kMaxSize = 6;

// int[] fill(int size);

int main()
{
    // C Style

    int numbers[kMaxSize] = {10, 20, 30, 40, 50, 60};

    std::cout << numbers << std::endl;
    std::cout << "------------------------------" << std::endl;

    for (int i = 0; i < kMaxSize; i++)
    {
        // & address of operator
        // usage of & depends on context so aa
        std::cout << &numbers[i] << " | " << numbers[i] << std::endl;
    }

    std::cout << "------------------------------" << std::endl;
    int other[kMaxSize];
    // assign all values from the first array to the second array
    // with a normal variable you just other = numbers
    // but with an array you have to loop through it

    for (int i = 0; i < kMaxSize; i++)
    {
        // & address of operator
        // usage of & depends on context so aa
        other[i] = numbers[i];
        std::cout << &other[i] << " | " << other[i] << std::endl;
    }

    // if numbers == other doens't work because in c style arrays you are really comparing addresses

    // to actually compare them you'd have to iterate through both arrays like this
    bool are_equal = true;

    for (int i = 0; i < kMaxSize; i++)
    {
        if (numbers[i] != other[i])
        {
            are_equal = false;
            break;
        }
    }
    if (are_equal)
    {
        std::cout << "Arrays are equal" << std::endl;
    }
    else
    {
        std::cout << "Arrays are not equal" << std::endl;
    }

    // if you pass an array into a function by value (without & in the function header)
    // it still acts as passing by reference because you are passing in the memory address of the first element
    // so if you change the value of the array in the function, it will change the value of the array in memory
    // if you don't want it to change make it const

    int numeros[kMaxSize];
    // numeros = fill(kMaxSize);
}

// you can't return a c style array from a function
// you'd have to pass an array into it

// int[] fill(int size)
// {
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = i;
//     }
//     return arr;
// }