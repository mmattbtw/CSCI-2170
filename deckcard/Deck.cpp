#include "Deck.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>

Deck::Deck()
{
    fill_deck();
    srand(time(0));
    top = DECK_SIZE;
}

void Deck::fill_deck()
{
    for (int i = 0; i < DECK_SIZE; i++)
    {
        cards.at(i) = Card(i);
    }
}

void Deck::reset()
{
    fill_deck();
    top = DECK_SIZE;
}

void Deck::display() const
{
    for (int i = 0; i < DECK_SIZE; i++)
    {
        cards.at(i).display();
    }
}

void Deck::shuffle()
{
    for (int i = 0; i < DECK_SIZE; i++)
    {

        std::swap(cards.at(i), cards.at(rand() % DECK_SIZE));
    }
}

Card Deck::draw()
{
    top--;
    return cards.at(top);
}

bool Deck::is_empty() const
{
    if (top <= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}