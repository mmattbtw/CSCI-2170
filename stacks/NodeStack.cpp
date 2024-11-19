#include "NodeStack.h"
#include <string>

Stack::Stack(const Stack &copy_from)
{
    m_top = nullptr;
    m_bottom = nullptr;
    if (copy_from.empty())
    {
        return;
    }
    Node *current{copy_from.m_top};
    while (current != nullptr)
    {
        push_back(current->data);
        current = current->next;
    }
}

Stack::~Stack()
{
    while (!empty())
    {
        pop();
    }
}

Stack &Stack::operator=(const Stack &copy_from)
{
    m_top = nullptr;
    m_bottom = nullptr;
    if (copy_from.empty())
    {
        return *this;
    }
    Node *current{copy_from.m_top};
    m_top = current;
    while (current != nullptr)
    {
        push_back(current->data);
        current = current->next;
    }
    return *this;
}

void Stack::push_back(std::string value)
{
    Node *temp = new Node;
    temp->data = value;
    temp->next = nullptr;
    if (empty())
    {
        m_top = temp;
        m_bottom = temp;
        return;
    }
    m_bottom->next = temp;
    m_bottom = temp;
};

void Stack::push(std::string value)
{
    Node *temp = new Node;
    temp->data = value;
    temp->next = m_top;
    if (empty())
    {
        m_bottom = temp;
    }
    m_top = temp;
}

void Stack::pop()
{
    Node *temp{m_top};
    m_top = m_top->next;
    temp->next = nullptr;
    delete temp;
}