#include "MyVector.h"

MyVector::MyVector()
{
    m_data = nullptr;
    m_size = 0;
    m_max_size = 0;
}

MyVector::~MyVector()
{
    // delete
    delete[] m_data;
}

int MyVector::at(int index) const
{
    if (index < 0 || index >= m_max_size)
    {
        throw;
    }
    return m_data[index];
}

void MyVector::push_back(int value)
{
    if (m_data == nullptr)
    {
        m_data = new int;
        *m_data = value;
        ++m_size;
        ++m_max_size;
        return;
    }

    if (m_size == m_max_size)
    {
        resize(m_size * 2);
    }

    m_data[m_size] = value;
    m_size++;
}

void MyVector::resize(int size)
{
    // request for bigger space
    int *temp = new int[m_size + size];

    // copy from old to new
    for (int i{0}; i < m_size; ++i)
    {
        temp[i] = m_data[i];
    }
    delete[] m_data;
    m_data = temp;
    m_max_size = size;
}