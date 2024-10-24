// class declaration
// function prototypes (not always)

// makes it so it doesn't duplicate copying the header file.
#ifndef CARD_H
#define CARD_H
//
#include <string>

const int SUIT_SIZE = 13;

enum Suit
{
    CLUB,
    SPADE,
    HEART,
    DIAMOND
};

class Card
{
private:
    std::string face_value;
    Suit suit;
    std::string color; // maybe make this an enum
    int points;
    void set_suit(int value);
    void set_color();
    void set_face_value(int value);

public:
    Card();
    Card(int value);
    void display() const;
};

#endif