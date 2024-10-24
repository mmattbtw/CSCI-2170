#include <iostream>
#include "Card.h"
#include "Deck.h"

int main()
{
    std::cout << "Deck / Card Test" << std::endl;

    Deck cards;
    cards.shuffle();
    while (!cards.is_empty())
    {
        cards.draw().display();
    }

    return 0;
}