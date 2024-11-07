#include "LinkedList.h"
#include <iostream>


void LinkedList::print() const{
    std::cout << "something" << std::endl;
}

void LinkedList::push_back(int value) {
    // create new node on heap
    Node *temp = new Node;
    temp->data = value;
    temp->next = nullptr;

    if (empty()) {
        m_head = temp;
        return;
    }

    
}
