#include <iostream>
#include <fstream>
#include <array>

int main()
{
    std::ifstream valuesFile;
    valuesFile.open("values.dat");

    std::array<int, 30> first;
    std::array<int, 30> second;

    int num1 = 0;
    int num2 = 0;

    valuesFile >> num1 >> num2;

    int numEven = 0;
    while (valuesFile)
    {
        if ((num1 + num2) % 2 == 0)
        {
            first.at(numEven) = num1;
            second.at(numEven) = num2;
            numEven++;
            // std::cout << '[' << num1 << ", " << num2 << ']' << std::endl;
        }
        valuesFile >> num1 >> num2;
    }
    valuesFile.close();

    for (int i = 0; i < numEven; i++)
    {
        std::cout << "[" << first.at(i) << ", " << second.at(i) << "]" << std::endl;
    }

    std::cout << std::endl;

    for (int i = numEven - 1; i >= 0; i--)
    {
        std::cout << "[" << first.at(i) << ", " << second.at(i) << "]" << std::endl;
    }

    return 0;
}