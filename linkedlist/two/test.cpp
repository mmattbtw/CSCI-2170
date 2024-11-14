#include <fstream>
#include <iostream>
#include "LinkedList.h"
// #include <forward_list>

int main()
{
    LinkedList numbers1;
    numbers1.push_back(1);
    numbers1.push_back(2);
    numbers1.push_back(3);
    numbers1.push_back(4);

    std::cout << "Numbers 1:" << std::endl;
    numbers1.print();

    // LinkedList numbers2{numbers1};
    LinkedList numbers2;
    numbers2.push_front(20000);
    numbers2 = numbers1;
    numbers2.push_front(100);

    std::cout << "\nNumber 2:" << std::endl;
    numbers2.print();

    std::cout << "\nPop Front" << std::endl;
    numbers2.pop_front();
    numbers2.print();

    std::cout << "\nPop Back" << std::endl;
    numbers2.pop_back();
    numbers2.pop_back();
    numbers2.pop_back();
    numbers2.pop_back();
    numbers2.print();

    std::cout << "\nReverse Print" << std::endl;
    numbers1.print_reverse();

    return 0;
}