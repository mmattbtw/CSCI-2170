#include <iostream>
#include <string>
#include <array>
#include <fstream>

// i think he said c-style
// structure declaration
// tells compiler i want a new data type
// struct TypeName {
// };

// javascript object lowkey
struct Item
{
    std::string name;
    int qty;
    float price;
};

const int kMaxToys = 100;

Item get_toy(std::ifstream &file);
int find_toy(std::array<Item, kMaxToys> inventory, int size, Item toy);
void print(std::array<Item, kMaxToys> inventory, int size);

int main()
{
    // no indexing!!
    //
    // Item item = {"Give me $30", 30, 30.00};

    // item.name = "Give me $40";
    // item.qty = 40;
    // item.price = 40.00;

    // can't do if one == two to compare entire structs

    std::ifstream infile;
    infile.open("inventory.dat");
    if (!infile)
    {
        std::cout << "ERR" << std::endl;
        return 1;
    }

    // skip header
    std::string a;
    std::getline(infile, a);
    // clear the string to use less memory........ In Theory.
    a = "";

    std::array<Item, kMaxToys> inventory;
    int size = 0;
    Item toy = get_toy(infile);
    while (infile)
    {
        int location = find_toy(inventory, size, toy);
        if (location != -1)
        {
            inventory.at(location).qty += toy.qty;
        }
        else
        {
            inventory.at(size) = toy;
            size++;
        }
        toy = get_toy(infile);
    }
    infile.close();

    print(inventory, size);

    return 0;
}

void print(std::array<Item, kMaxToys> inventory, int size)
{
    for (int i = 0; i < size; i++)
    {
        // could also make a function called print_toy and do that but....... i don't find that useful here in my own opinion
        // to each their own i suppose.
        // ok he's doing fancy formatting thats why lol
        Item toy = inventory.at(i);
        std::cout << toy.name << " - " << toy.qty << "x @ $" << toy.price << std::endl;
    }
}

Item get_toy(std::ifstream &file)
{
    Item toy;
    std::getline(file, toy.name, ',');
    file >> toy.qty;
    file.ignore();
    file >> toy.price;
    return toy;
}

int find_toy(std::array<Item, kMaxToys> inventory, int size, Item toy)
{
    for (int i = 0; i < size; i++)
    {
        if (inventory.at(i).name == toy.name)
        {
            return i;
        }
    }
    return -1;
}