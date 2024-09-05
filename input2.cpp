#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::string major;
    int age;
    double gpa;
    char letter;

    std::cout << "Enter your name: ";
    // std::cin >> name;
    // Strings only vvvv
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    // ignores the last character in the buffer
    // cin.ignore(1) skips 1 byte in the stream, etc.
    // cin.ignore(256, '\n') ignore buffer until you get past 256 characters or you hit \n
    // when do you need ignore? if you use extraction before getline/get
    std::cin.ignore(256, '\n');

    std::cout << "Enter your major: ";
    // std::cin >> major;
    // getline does NOT skip whitespace
    // so because I used extraction on std::cin >> age, it stops on the new line inserted so then getline just pulls the new line.
    // std::getline(stream, string_var, char_delimiter)
    // std::getline(std::cin, major, ";")
    // ^it stops when you hit a semicolon in the line
    std::getline(std::cin, major);
    std::cout << "Enter your gpa and letter: ";
    std::cin >> gpa >> letter;

    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << major << std::endl;
    std::cout << gpa << std::endl;
    std::cout << letter << std::endl;
}