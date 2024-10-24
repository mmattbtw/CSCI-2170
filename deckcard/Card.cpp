// where you put important implementation details
#include "Card.h"
#include <iostream>
#include <iomanip>
#include <random>
#include <cstdlib>

Card::Card()
{

    // ok so when making an array it makes 52 instances of this default
    // so like it calls this 52 times so like
    // not........ useful. youknow
    // std::cout << "Default was called, generating random card." << std::endl;

    // std::srand(std::time(NULL));
    // int value = rand() % 52;
    // points = (value % SUIT_SIZE) + 1;
    // set_suit(value);
    // set_color();
    // set_face_value(value);
}

Card::Card(int value)
{
    points = (value % SUIT_SIZE) + 1;
    set_suit(value);
    set_color();
    set_face_value(value);
}

void Card::set_face_value(int value)
{
    switch (value % 13)
    {
    case 0:
        face_value = "Ace";
        break;
    case 1:
        face_value = "2";
        break;
    case 2:
        face_value = "3";
        break;
    case 3:
        face_value = "4";
        break;
    case 4:
        face_value = "5";
        break;
    case 5:
        face_value = "6";
        break;
    case 6:
        face_value = "7";
        break;
    case 7:
        face_value = "8";
        break;
    case 8:
        face_value = "9";
        break;
    case 9:
        face_value = "10";
        break;
    case 10:
        face_value = "Jack";
        break;
    case 11:
        face_value = "Queen";
        break;
    case 12:
        face_value = "King";
        break;
    default:
        std::cout << "lol" << std::endl;
        break;
    }
}

void Card::set_color()
{
    switch (suit)
    {
    case HEART:
    case DIAMOND:
        color = "\e[41m";
        break;
    case CLUB:
    case SPADE:
        color = "\e[40m";
        break;
    default:
        std::cout << ":(" << std::endl;
    }
}

void Card::set_suit(int value)
{
    switch (value / SUIT_SIZE)
    {
    case CLUB:
        suit = CLUB;
        break;
    case SPADE:
        suit = SPADE;
        break;
    case HEART:
        suit = HEART;
        break;
    case DIAMOND:
        suit = DIAMOND;
        break;
    default:
        std::cout << "wtf" << std::endl;
        break;
    }
}

void Card::display() const
{
    std::string suitEmoji;
    switch (suit)
    {
    case CLUB:
        suitEmoji = "♣️";
        break;
    case SPADE:
        suitEmoji = "♠️";
        break;
    case HEART:
        suitEmoji = "❤️";
        break;
    case DIAMOND:
        suitEmoji = "♦️";
        break;
    default:
        suitEmoji = "💀";
        break;
    }
    std::cout << color << std::setw(5) << face_value << " " << suitEmoji << "\e[0m" << std::endl;
}