#ifndef VECTORSTACK_H
#define VECTORSTACK_H

#include <vector>
#include <string>

class Stack
{
private:
    std::vector<std::string> data;
    int m_top;

public:
    Stack() : m_top(0) {}
    void push(std::string value)
    {
        data.push_back(value);
    };
    void pop() { data.pop_back(); };
    bool empty() const { return data.empty(); };
    std::string top() const { return data.back(); };
};

#endif