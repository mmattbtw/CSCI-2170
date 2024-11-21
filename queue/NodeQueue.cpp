#include "NodeQueue.h"
#include <string>

Queue::Queue(const Queue &copy_from)
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
        push(current->data);
        current = current->next;
    }
}

Queue::~Queue()
{
    while (!empty())
    {
        pop();
    }
}

Queue &Queue::operator=(const Queue &copy_from)
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
        push(current->data);
        current = current->next;
    }
    return *this;
}

void Queue::push(std::string value)
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
}

void Queue::pop()
{
    Node *temp{m_top};
    m_top = m_top->next;
    temp->next = nullptr;
    delete temp;
}