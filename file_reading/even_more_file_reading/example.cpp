#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream numfile;
    numfile.open("network_one.dat");
    if (!numfile)
    {
        std::cout << "file can't open :(" << std::endl;
        return 1;
    }

    // AAA = (BBB, CCC)
    // extraction can get the first part
    // the next thing you need is "BBB"
    // the next 4 characters you don't care about
    // however if you use ignore and extraction it will grab "BBB,"
    // you want to get everything up to , but get rid of it.
    // getline (stream, variable)
    // reads everything up to the new line character and throws it out
    // you can use getline to pick the character you stop at getline(stream, var, ',')
    // so it'll grab "BBB," and get rid of the ,
    // if you want to get CCC, you have the same problem with extraction and the ")",
    // can't use default getline because it'll get the space
    // so you could use getline(stream, var, ")")
    // and then you can use extraction again to get the first part again eg. AAA

    std::string part1, part2, part3;

    numfile >> part1;

    while (numfile)
    {
        // ignores the 4 characters after BBB
        numfile.ignore(4);
        std::getline(numfile, part2, ',');
        // ignores the whitespace before CCC
        numfile.ignore();
        std::getline(numfile, part3, ')');

        std::cout << part1 << '-' << part2 << '-' << part3 << std::endl;

        numfile >> part1;
    }

    numfile.close();

    return 0;
}