#include <fstream>
#include <iostream>
#include "LinkedList.h"
// #include <forward_list>

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

    // std::forward_list<int> numbers;
    LinkedList numbers;

    int num;
    int count;

    numfile >> num;
    while (numfile)
    {
        numbers.push_back(num);
        count++;
        numfile >> num;
    }
    numfile.close();

    numbers.print();

    return 0;
}