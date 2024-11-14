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
    LinkedList(const LinkedList &copy_from);

    void print() const;
    void print_reverse() const;

    void push_back(int value);
    void push_front(int value);

    void pop_front();
    void pop_back();

    void clear();
    bool empty() const { return !m_head; }

    LinkedList &operator=(LinkedList copy_from);

    ~LinkedList();
};

#endif