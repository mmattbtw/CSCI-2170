#include "LinkedList.h"
#include <iostream>

LinkedList::~LinkedList()
{
    Node *current{m_head};
    while (current->next != nullptr)
    {
        current = current->next;
        m_head = current;
        delete m_head;
    }
}

void LinkedList::print() const
{
    if (empty())
    {
        std::cout << "List is empty." << std::endl;
    }

    Node *current{m_head};
    while (current != nullptr)
    {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

// void LinkedList::push_back(int value)
// {
//     // create new node on heap
//     Node *temp = new Node;
//     // assign value to new node
//     temp->data = value;
//     // set next pointer to a null pointer
//     temp->next = nullptr;

//     if (empty())
//     {
//         // set head of linked list to the address of this node
//         m_head = temp;
//         return;
//     }

//     // create a pointer and start at the head
//     Node *current{m_head};

//     while (current->next != nullptr)
//     {
//         current = current->next;
//     }
//     current->next = temp;
// }

void LinkedList::push_back(int value)
{
    Node *temp = new Node;
    temp->data = value;
    temp->next = nullptr;
    if (empty())
    {
        m_head = temp;
        m_tail = temp;
        return;
    }
    m_tail->next = temp;
    m_tail = temp;
}

void LinkedList::push_front(int value)
{
    Node *temp = new Node;
    temp->data = value;
    temp->next = m_head;
    m_head = temp;
}