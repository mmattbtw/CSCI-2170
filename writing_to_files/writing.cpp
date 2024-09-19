#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outfile;
    // replaces the file if it already exists
    outfile.open("sample.dat");

    outfile << "hai" << std::endl;

    // doesn't save until it closes
    outfile.close();

    return 0;
}