#include <iostream>
#include <string>

// struct publically accessible by default
// class privately accessible by default

enum Food
{
    orange,
    apple,
    potato
};

class Person
{
private: // access specifier
    std::string name;
    int age;

public: // access specifier
    // methods (member functions of class)
    // functions are going to interact with things
    // put prototypes here for a class function

    // Constructors
    // no return types
    // you can initilize the state of name/age.
    Person(); // Default Constructor (no arguments)
    Person(std::string name, int age);

    // want to be able to access name and change:

    // accessors / getters
    std::string get_name() const;
    int get_age() const;

    // mutators / setters
    void set_name(std::string name);
    void set_age(int age);
    void print() const;
    void eat(Food) const;

    // Destructors
    // just one
    ~Person();
};

int main()
{
    // as struct
    // Person me;
    // me.name = "Matt";
    // me.age = 19;
    // ^^^^^^^^^^^^^^^^^^
    // doesn't work in classes

    Person me; // instance of object
    me.set_name("Matt");
    me.set_age(19);
    me.print();
    me.eat(apple);

    Person other;
    other.set_name("AAAA");
    other.set_age(24);
    other.print();
    other.eat(orange);

    Person xd;
    xd.print();

    Person xd2("xD2", 30);
    xd2.print();

    return 0;
}

Person::~Person()
{
    // like an onEnded ... if you know what i mean.
    // almost like a callback function??? maybe thats a bad comparison
    // useful for file connections / pointers / etc.
    std::cout << name << " is dying now :(" << std::endl;
}

Person::Person()
{
    set_name("XD");
    set_age(40);
}

Person::Person(std::string name, int age)
{
    set_name(name);
    set_age(age);
}

std::string Person::get_name() const
{
    return name;
}

int Person::get_age() const
{
    return age;
}

void Person::set_name(std::string n)
{
    name = n;
}
void Person::set_age(int age)
{
    this->age = age;
}
void Person::print() const
{
    std::cout << name << " - " << age << std::endl;
}
void Person::eat(Food food) const
{
    std::cout << name << " ate a ";
    switch (food)
    {
    case apple:
        std::cout << "apple";
        break;
    case orange:
        std::cout << "orange";
        break;
    case potato:
        std::cout << "potato";
        break;
    default:
        std::cout << "idek";
        break;
    }
    std::cout << std::endl;
}