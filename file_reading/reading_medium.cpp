#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream numfile;
    numfile.open("sample.dat");

    std::string line;
    // everything up to the newline, and gets rid of the newline.
    std::getline(numfile, line);

    // repeatedly read a line until the end of the file
    // if line is empty, print and reset
    // else convert line to int and add to sum

    int total;
    total = 0;
    while (numfile)
    {
        if (line == "")
        {
            std::cout << "LOCAL: " << total << std::endl;
            total = 0;
        }
        else
        {
            // convert line to int
            int value = std::stoi(line);
            total += value;
        }
        // get next line
        std::getline(numfile, line);
    }

    numfile.close();

    return 0;
}