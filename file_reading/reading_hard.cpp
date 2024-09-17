#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::ifstream numfile;

    numfile.open("sample2.dat");

    // >> str >> int >> char >> 5 ints >> | >> 8 ints
    // Game 1: 1 2 3 4 5 | 1 2 3 4 5 6 7 8

    std::string game;
    int id;
    int total;
    total = 0;
    int value;
    char sep;

    numfile >> game;
    while (numfile)
    {
        numfile >> id;
        numfile >> sep;
        std::cout << "Game " << id << ": ";
        for (int i = 0; i < 5; ++i)
        {
            numfile >> value;
            total += value;
        }
        std::cout << total << " | ";
        numfile >> sep;
        total = 0;
        for (int i = 0; i < 8; ++i)
        {
            numfile >> value;
            total += value;
        }
        std::cout << total << std::endl;

        total = 0;
        numfile >> game;
    }

    return 0;
}