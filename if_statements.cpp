#include <iostream>

int main()
{

    int age;
    age = 0;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 30)
    {
        std::cout << "🤣" << std::endl;
        std::cout << "thinking about how this one time while I was playing Fortnite I got killed by this guy with his Twitch username in his Fortnite username, so I joined his stream and he was live and he was like \"Dude I'm 30 years old I got a job\" but it was like 2 PM on a Tuesday bro had to be lying like what are you doing on Twitch.tv go clock in lil bro. He was so mad and he was also Canadian HAHAHAHAHA." << std::endl;
    }
    else if (age < 30)
    {
        std::cout << "W" << std::endl;
    }
    else
    {
        std::cout << "erm" << std::endl;
    }
    if (age < 14)
        std::cout << "skibidi toilet rizz kai cenat fanum tax" << std::endl;

    if (age <= 20 && age >= 18)
    {
        std::cout << "wild.." << std::endl;
        if (age == 19)
        {
            std::cout << "oh wow.." << std::endl;
        }
    }

    // ternary :D ? :
    // (expression) ? true : false
    // Matt ❤️ Ternary
    // Matt overuse ternary in his React code and its really messy
    // user.data ? user.data.subscriptionStatus === 'active' ? 'money' : 'no money' : ' no account'

    // switch statement!!!
    // compiles to faster than if/else
    // everything is equality,,,,

    switch (age)
    {
    case 19:
        std::cout << "Hai" << std::endl;
        break;
    default:
        std::cout << "Erm" << std::endl;
        break;
    }

    return 0;
}