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

public:
    LinkedList() : m_head(nullptr) {};

    void print() const;
    void push_back(int value);
    bool empty() const { return !m_head; }

    ~LinkedList();
};

#endif