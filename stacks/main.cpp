#include <iostream>
// #include <stack>
#include <string>

// #include "ArrayStack.h"
// #include "VectorStack.h"
#include "NodeStack.h"

int main()
{

    // last in first out data structure
    // data structure stack not memory structure stack

    // think about a stack of plates

    // top               bottom
    // v                   v
    // 5 | 4 | 3 | 2 | 1 | 0
    // ^                   ^
    // newest           oldest
    // you'd grab from the top first

    //  "container"
    // push, top, pop, empty

    Stack words;

    words.push("ball");
    words.push("balls rofl");
    words.push("square pusher");
    words.push("aphex twin");
    words.push("mad eon");

    Stack other;
    other = words;
    // Stack three{words};

    while (!words.empty())
    {
        std::cout << words.top() << std::endl;
        words.pop();
    }

    return 0;
}