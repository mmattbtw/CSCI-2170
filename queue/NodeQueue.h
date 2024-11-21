#ifndef NODEQUEUE_H
#define NODEQUEUE_H

#include <vector>
#include <string>

struct Node
{
    std::string data;
    Node *next;
};

class Queue
{
private:
    Node *m_top;
    Node *m_bottom;

public:
    Queue() : m_top(nullptr), m_bottom(nullptr) {}
    Queue(const Queue &copy_from);
    Queue &operator=(const Queue &copy_from);
    ~Queue();
    void push(std::string value);
    void pop();
    bool empty() const { return m_top == nullptr; };
    std::string front() const { return m_top->data; };
};

#endif