// ccin / cout
#include <iostream>

// string type
#include <string>

// input / output manipulation
// setprecision, setw
#include <iomanip>

int main() {
    int a;
    int b;
    long c;

    char letter;

    float pie;

    // String object
    std::string name;
    name = "matt";

    // std::fixed switches from sci notation to fixed notation.
    // almost the equivalent to python print(f"{float:f}")

    // std::setprecision sets the decimal percision of the output.
    // equivalent to python print(f"{float:.2f}")

    // std::setfill sets the fill character, default is whitespace
    // equivalent to python print(f"{float:@}) (?)

    // setting the justification is also one of these "global" ones, see line ~50

    // these are almost "global", where these apply for the whole cout until flipped otherwise.
    std::cout << std::fixed << std::setprecision(2) << std::setfill('@');

    // by default there is rounding for floating point values.

    // std:cout is a "stream of information", not really a function.
    // no association with new lines or anything unless you put in \n or endl
    // std:endl kinda "clears" the buffer

    // setw sets the field width, "local" so you'll have to set it every time
    // right justified by default.
    // example: setw(9) creates a string with 9 characters "123456789" (in whitespace)
    // so std::cout << std::setw(9) << 3.14; would output "     3.14"
    std::cout << std::setw(20) << 23423432 << " aaaa" << std::endl;

    std::cout << std::setw(20) << "fortnite" << std::endl;

    // justifying text
    // std::left, std::right, std::internal
    // manipulations apply to the whole cout
    // so you might have to flip left/right
    std::cout << std::left << std::setw(40) << -12341234.1234 << "xD" << std::endl;
    
    // kinda justifying based on the positive/negative value of the number.
    std::cout << std::internal << std::setw(40) << -12341234.1234 << "xD" << std::endl;

    std::cout<<"\n\n\n";

    // string = input()

    // you can't think of input as line by line because if the type is wrong or the user inputs a wrong type, it will "just overflow into the next" (<-- wrong explanation but i get to it)

    // extraction takes everything from the buffer that applies to the variables type and stores it into the variable, it moves the rest of the buffer to the beginning.
    // so if there is nothing else in the buffer then it lets you type again.
    // but for example in this program, in the first prompt if you type "4 20" it will store 4 to a and 20 to b, then prompt you for "Enter a letter".
    // if you type in the first prompt "4 20 xD" it will store 4 to a and 20 to b, then since it's looking for a single character it will store x to letter, and then it will look for a string type, "D", and store it to name, then prompt you for a real number.
    std::cout << "Enter a number: ";
    std :: cin >> a;
    std::cout << "Enter another number: ";
    std::cin >> b;
    std::cout << "Enter a letter: ";
    std::cin >> letter;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter a real number: ";
    std::cin >> pie;

    std::cout << std::endl;

    std::cout<< a << std::endl;
    std::cout << b << std::endl;
    std::cout << letter << std::endl;
    std::cout << name << std::endl;
    std::cout << pie << std::endl;
    
    // to ignore the new lines in the cin object / stream you'll use this
    std::cin.ignore();

    std::cout << "name again plsss: ";
    // if you wanted to get something like "xD LOL ROFL" you would use getline.
    std::getline(std::cin, name);

    std::cout << name << std::endl;

    // this does something
    std::cin.get(letter);

    return 0;
}