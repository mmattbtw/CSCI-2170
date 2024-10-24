// see line 4 in card.h
#ifndef DECK_H
#define DECK_H
//
#include "Card.h"
#include <array>

const int DECK_SIZE = 52;

class Deck
{
private:
    std::array<Card, DECK_SIZE> cards;
    int top;
    void fill_deck();
    void reset();

public:
    Deck();
    void display() const;
    void shuffle();
    Card draw();
    bool is_empty() const;
};

#endif