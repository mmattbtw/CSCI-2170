#include <fstream>
#include <iostream>
#include "MyVector.h"
#include <vector>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "ERR: usage ./a.out filename" << std::endl;
        return 1;
    }

    std::string filename{argv[1]};
    std::ifstream numfile{filename};

    if (!numfile)
    {
        std::cout << "ERR: " << filename << " did not open" << std::endl;
        return 1;
    }

    // MyVector numbers;
    std::vector<int> numbers;

    int num;

    numfile >> num;
    while (numfile)
    {
        // kinda like array.push in python?
        numbers.push_back(num);
        numfile >> num;
    }
    numfile.close();

    for (int i{0}; i < numbers.size(); ++i)
    {
        std::cout << numbers.at(i) << std::endl;
    }
    std::cout << "SIZE: " << numbers.size() << std::endl;
    std::cout << "MAX: " << numbers.capacity() << std::endl;
    std::cout << numbers.data() << std::endl;
    return 0;
}