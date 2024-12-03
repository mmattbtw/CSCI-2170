#include <array>
#include <iostream>
#include <algorithm>
#include <vector>

const int kMaxSize{5};

int main()
{
    std::vector<int> numbers{10, 20, 50, 30, 40};
    std::vector<int>::iterator it = numbers.begin();
    std::sort(numbers.begin(), numbers.end());

    // std::cout << *it << std::endl;
    // it++;
    // std::cout << *it << std::endl;
    // it--;
    // std::cout << *it << std::endl;

    while (it != numbers.end())
    {
        std::cout << *it << std::endl;
        ++it;
    }

    return 0;
}