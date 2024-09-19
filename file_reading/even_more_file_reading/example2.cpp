// Priming read / recurring read

// first thing I want to do is try to read the first piece of information (for a database record / row)
// as long as it was read successfully (while file object is still okay)

// if ur only checking for EOF then you have to hit the end of the file and flip the switch, so if you never get to that part in the stream from failing early then you'll never flip a switch. (like a conditional switch for testing if u reached end of file, ifykwim)

// DO I need to read anything else for this "record"?

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream numfile;
    numfile.open("group_sums.dat");
    int total;
    int value;

    numfile >> value; // priming read

    while (numfile)
    {
        // anything else?
        // do stuff
        total += value;
        numfile >> value; // recurring read.
    }
    numfile.close();
    std::cout << "Total: " << total << std::endl;
    return 0;
}