#include <string>
#include <array>
#include <iostream>
#include <fstream>

const int kMaxTodos = 100;
int load(std::ifstream &infile, std::array<char, kMaxTodos> &priorities, std::array<std::string, kMaxTodos> &todos);
void print(const std::array<char, kMaxTodos> &priorities, const std::array<std::string, kMaxTodos> &todos, const int count);
void add(std::array<char, kMaxTodos> &priorities, std::array<std::string, kMaxTodos> &todos, int &count);
void remove(std::array<char, kMaxTodos> &priorities, std::array<std::string, kMaxTodos> &todos, int &count);
void save(const std::string filename, const std::array<char, kMaxTodos> &priorities, const std::array<std::string, kMaxTodos> &todos, const int count);
void print_menu();

// I have been wondering about this for ages.
// you can give parameters to main() to make them parameters in the command line
// vvvvvvvvvvv
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "ERROR: ./a.out filename" << std::endl;
        return 1;
    }

    // validate file
    std::ifstream infile;
    infile.open(argv[1]);

    if (!infile)
    {
        std::cout << "ERROR: " << argv[1] << " didn't open." << std::endl;
        return 1;
    }

    std::array<char, kMaxTodos> priorities;
    std::array<std::string, kMaxTodos> todos;

    // load file into arrays
    int todos_count = load(infile, priorities, todos);

    int choice;
    print_menu();
    std::cin >> choice;
    std::cin.ignore();
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            print(priorities, todos, todos_count);
            break;
        case 2:
            add(priorities, todos, todos_count);
            break;
        case 3:
            remove(priorities, todos, todos_count);
            break;
        default:
            std::cout << "Try again..." << std::endl;
            break;
        }

        print_menu();
        std::cin >> choice;
        std::cin.ignore();
    }

    save(argv[1], priorities, todos, todos_count);

    std::cout << "-------- After Changes --------" << std::endl;
    print(priorities, todos, todos_count);

    return 0;
}

void print_menu()
{
    std::cout << "Crazy To Do List Maker....." << std::endl;
    std::cout << "1. Print" << std::endl;
    std::cout << "2. Add" << std::endl;
    std::cout << "3. Remove" << std::endl;
    std::cout << "4. Save & Quit" << std::endl;
}

int load(std::ifstream &infile, std::array<char, kMaxTodos> &priorities, std::array<std::string, kMaxTodos> &todos)
{
    int count = 0;

    // extract single character prio status & store in array
    infile >> priorities.at(count);

    while (infile)
    {
        // ignore space before todo
        infile.ignore();
        // get the entire todo line & store it in the array
        std::getline(infile, todos.at(count));

        // iterate
        count++;
        infile >> priorities.at(count);
    }
    return count;
}

void add(std::array<char, kMaxTodos> &priorities, std::array<std::string, kMaxTodos> &todos, int &count)
{
    if (count >= kMaxTodos)
    {
        std::cout << "ERROR: Too many todos.";
        return;
    }

    std::cout << "Enter Priority & Todo: ";
    std::cin >> priorities.at(count);
    std::cin.ignore();
    std::getline(std::cin, todos.at(count));
    count++;
}

void remove(std::array<char, kMaxTodos> &priorities, std::array<std::string, kMaxTodos> &todos, int &count)
{
    if (count <= 0)
    {
        std::cout << "ERROR: list is empty, can't remove" << std::endl;
        return;
    }
    print(priorities, todos, count);
    std::cout << "Which index would you like to remove: ";
    int loc;
    std::cin >> loc;
    std::cin.ignore();

    // iterate from spot 2 copying the next spot into the current spot.

    for (int i = loc; i < kMaxTodos - 1; i++)
    {
        priorities.at(i) = priorities.at(i + 1);
        todos.at(i) = todos.at(i + 1);
    }
    count--;
}

void save(const std::string filename, const std::array<char, kMaxTodos> &priorities, const std::array<std::string, kMaxTodos> &todos, const int count)
{
    std::ofstream outfile;
    outfile.open(filename);

    for (int i = 0; i < count; i++)
    {
        outfile << priorities.at(i) << " " << todos.at(i) << std::endl;
    }
}

void print(const std::array<char, kMaxTodos> &priorities, const std::array<std::string, kMaxTodos> &todos, const int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << "(" << i << ") " << "[" << priorities.at(i) << "] " << todos.at(i) << std::endl;
    }
}