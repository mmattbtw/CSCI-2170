#include <iostream>
#include <fstream>
#include <array>
#include <string>

const int arrMaxSize = 100;

void process_file(std::ifstream &infile, std::array<std::string, arrMaxSize> &invalidEmails, int &invalidCount);
void print(std::array<std::string, arrMaxSize> emails, int size);
bool has_at(std::string string);
bool is_valid(std::string string);

int main()
{
    std::ifstream emailList;
    std::string fileName;

    std::cout << "Enter file to process: ";
    std::cin >> fileName;

    emailList.open(fileName);

    if (!emailList)
    {
        std::cout << fileName << " could not be opened." << std::endl;
        return 1;
    }

    std::array<std::string, arrMaxSize> invalidEmails;
    int invalidCount = 0;

    std::cout << "Valid Emails: " << std::endl;
    process_file(emailList, invalidEmails, invalidCount);
    emailList.close();

    std::cout << std::endl;

    std::cout << "Invalid Emails: " << std::endl;
    print(invalidEmails, invalidCount);

    return 0;
}

void print(std::array<std::string, arrMaxSize> emails, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << emails.at(i) << std::endl;
    }
    return;
}

bool has_at(std::string string)
{
    for (int i = 0; i < string.length(); i++)
    {
        if (string[i] == '@')
        {
            return true;
        }
    }
    return false;
}

bool is_valid(std::string string)
{
    for (int i = 0; i < string.length(); i++)
    {
        if (string[i] == '$' || string[i] == '*' || string[i] == '!' || string[i] == '^')
        {
            return false;
        }
    }
    return true;
}

void process_file(std::ifstream &infile, std::array<std::string, arrMaxSize> &invalidEmails, int &invalidCount)
{
    std::string email;

    infile >> email;

    while (infile)
    {
        if (has_at(email))
        {
            if (is_valid(email))
            {
                std::cout << email << std::endl;
            }
            else
            {
                invalidEmails.at(invalidCount) = email;
                invalidCount++;
            }
        }
        else
        {
            invalidEmails.at(invalidCount) = email;
            invalidCount++;
        }

        infile >> email;
    }

    return;
}