#include <iostream>
#include <string>

int main()
{

    // looooop
    // 3 types of while loops
    // while, do-while, and for
    // ^^ in c++ a for loop is practically a while loop but diff syntax

    // range based for

    int count;
    count = 0;

    while (count < 10)
    {
        // ; by itself is practically "pass"
        std::cout << "hi " << count << std::endl;
        count++;
    }

    // it goes through once before it tested it.
    // pre-test = while, post-test = do-while
    do
    {
        std::cout << "type2" << std::endl;
        count++;
    } while (count < 20);

    // for loop is a pretest loop
    // count controlled

    // don't think about python here eek!!!
    // mostly for x in range type?? but like its totally different..
    // for ( initialization; test ; update ) {
    // with a for loop and you want to know where you stop at, you won't have access to that variable outside of the for block
    for (int count = 0; count < 10; count += 1)
    {
        std::cout << count << "yo" << std::endl;
    };

    std::string text;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);
    // strings are mutable btw

    int len = text.length();

    // legalllll
    // text[0]='@';

    // for (int i = 0; i < len; i)
    // {
    //     std::cout << text[i] << std::endl;
    // }

    // range based
    // init variable
    //   vvvvvvv
    for (char ch : text)
    {
        // cant do ch='Z' and it change text.
        // each iteration is copied into ch
        // unless you do char &ch
        std::cout << ch << std::endl;
    }

    // ++ / --
    // increment / decrement
    // its an operator so precedence moment...
    // can do ++x or x++

    // weird tings happen
    // a = b++ * 3;
    // a = ++b * 3;
    // while (std::cout << text[count++], count < 10);

    return 0;
}