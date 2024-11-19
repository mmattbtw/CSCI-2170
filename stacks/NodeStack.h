#ifndef NODESTACK_H
#define NODESTACK_H

#include <vector>
#include <string>

struct Node
{
    std::string data;
    Node *next;
};

class Stack
{
private:
    Node *m_top;
    Node *m_bottom;
    void push_back(std::string value);

public:
    Stack() : m_top(nullptr), m_bottom(nullptr) {}
    Stack(const Stack &copy_from);
    Stack &operator=(const Stack &copy_from);
    ~Stack();
    void push(std::string value);
    void pop();
    bool empty() const { return m_top == nullptr; };
    std::string top() const { return m_top->data; };
};

#endif