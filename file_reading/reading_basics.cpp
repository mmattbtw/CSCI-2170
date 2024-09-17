#include <iostream>
// file stream, think of using files the same as using cin/cout
#include <fstream>
#include <string>

int main()
{
    // working with files lowkey

    // create a file object in the correct mode.
    //            vvvvvvv a variable
    std::ifstream numfile;
    numfile.open("sample.dat"); // (filename)

    std::string line;
    // std::getline(numfile, line);

    int total;
    total = 0;

    // while (numfile)
    // {
    //     // will try to convert a line to an int
    //     int value = std::stoi(line);
    //     total += value;
    //     // move to next line
    //     std::getline(numfile, line);
    // }


    int value;
    // using extraction
    // saves memory, saves cost form conversion, skips whitespace
    numfile >> value;

    while ( numfile ) {
        total += value;
        numfile >> value;
    }

    numfile.close();

    std::cout << "Sum: " << total << "\nDONE" << std::endl;

    return 0;
}