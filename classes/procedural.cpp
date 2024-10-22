#include <iostream>
#include <string>

struct Person
{
    std::string name;
    int age;
};

enum Food
{
    YEP,
    AWESOME,
    COOL,
};

void update_name(Person &person, std::string name);
void update_age(Person &person, int age);
void print(const Person person);
void eat(Person person, Food food);

int main()
{
    // thought of as a variable
    Person me;
    me.name = "Matt";
    me.age = 19;

    print(me);
    update_name(me, "matt");
    update_age(me, 20);
    print(me);
    eat(me, AWESOME);

    return 0;
}

void print(const Person person)
{
    std::cout << person.name << " - " << person.age << std::endl;
}

void eat(Person person, Food food)
{
    std::cout << person.name << " ate a ";
    switch (food)
    {
    case YEP:
        std::cout << "yep";
        break;
    case AWESOME:
        std::cout << "awesome";
        break;
    case COOL:
        std::cout << "cool";
        break;
    default:
        std::cout << "idek";
        break;
    }
    std::cout << std::endl;
}

void update_age(Person &person, int age)
{
    person.age = age;
}

void update_name(Person &person, std::string name)
{
    person.name = name;
}