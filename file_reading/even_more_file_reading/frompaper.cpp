#include <iostream>
#include <fstream>

int main()
{
    std::ifstream numfile;
    numfile.open("group_sums.dat");
    int total;
    int value;
    while (numfile)
    {
        numfile >> value;
        total += value;
    }
    std::cout << "Total: " << total << std::endl;
    return 0;
}