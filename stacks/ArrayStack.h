#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <array>
#include <string>

const int kMaxSize{10};

class Stack
{
private:
    std::array<std::string, kMaxSize> data;
    int m_top;
    bool full() const { return m_top == kMaxSize; }

public:
    Stack() : m_top(0) {}
    void push(std::string value)
    {
        if (!full())
            data.at(m_top++) = value;
    };
    void pop() { m_top--; };
    bool empty() const { return m_top == 0; };
    std::string top() const { return data.at(m_top - 1); };
};

#endif