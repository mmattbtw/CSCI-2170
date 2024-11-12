#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// "one or more elements that are data and then you have one self referential pointer that lets you go to the next node in the chain"
struct Node
{
    int data;
    Node *next; // self referential pointer
};

class LinkedList
{
private:
    Node *m_head;
    Node *m_tail;

public:
    LinkedList() : m_head(nullptr), m_tail(nullptr) {};

    void print() const;
    void push_back(int value);
    void push_front(int value);
    bool empty() const { return !m_head; }

    ~LinkedList();
};

#endif