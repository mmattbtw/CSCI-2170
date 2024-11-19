#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(const LinkedList &copy_from)
{
    Node *current{copy_from.m_head};

    m_head = nullptr;
    m_tail = nullptr;

    while (current != nullptr)
    {
        push_back(current->data);
        current = current->next;
        // Node *temp = new Node;
        // temp->data = current->data;
        // temp->next = nullptr;
        // if (empty())
        // {
        //     m_head = temp;
        //     m_tail = temp;
        // }
        // else
        // {
        //     m_tail->next = temp;
        //     m_tail = temp;
        // }

        // current = current->next;
    }
}

LinkedList::~LinkedList()
{
    clear();
}

void LinkedList::clear()
{
    while (!empty())
    {
        pop_front();
    }
    m_tail = nullptr;
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

// he wants us to reverse list without recurssion or size vars or for loops or whateva
// like brahhhhhhhhh
// i mean could you just add previous to node and swap the addresses...
// wait im cooking??
// wait..,.
// wait no thats gonna require recurssion maybe so
void LinkedList::print_reverse() const
{
    if (empty())
    {
        std::cout << "list is empty :(" << std::endl;
    }
    Node *temp_tail{m_tail};
    while (temp_tail != m_head)
    {
        Node *current{m_head};
        while (current->next != temp_tail)
        {
            current = current->next;
        }
        std::cout << temp_tail->data << std::endl;
        temp_tail = current;
    }
    std::cout << m_head->data << std::endl;
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

void LinkedList::pop_front()
{
    Node *current{m_head->next};
    delete m_head;
    m_head = current;
}

void LinkedList::pop_back()
{
    if (m_head->next == nullptr)
    {
        clear();
        return;
    }
    Node *current{m_head};

    // while (current->next != m_tail)
    // {
    //     current = current->next;
    // }

    while (current->next->next != nullptr)
    {
        current = current->next;
    }

    // delete m_tail;

    delete current->next;
    current->next = nullptr;
    // m_tail = current;
}

LinkedList &LinkedList::operator=(LinkedList copy_from)
{
    if (!empty())
    {
        clear();
    }

    Node *current{copy_from.m_head};

    m_head = nullptr;
    m_tail = nullptr;

    while (current != nullptr)
    {
        push_back(current->data);
        current = current->next;
    }

    // return the value of this
    return *this;
}