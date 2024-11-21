#include <iostream>
// #include <queue>
#include <string>

#include "NodeQueue.h"

int main()
{

    // first in first out data structure

    //  "container"
    // push, top, pop, empty

    Queue words;

    words.push("ball");
    words.push("balls rofl");
    words.push("square pusher");
    words.push("aphex twin");
    words.push("mad eon");

    // my copy constructors dont work and idk why :( it just says segmentation fault
    // Queue other;
    // other = words;
    // Queue three{words};

    while (!words.empty())
    {
        std::cout << words.front() << std::endl;
        words.pop();
    }

    return 0;
}