#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector
{
private:
    int m_max_size;
    int m_size;
    int *m_data;

    void resize(int size);

public:
    MyVector();
    MyVector(const MyVector &copy);

    MyVector &operator=(const MyVector &copy);
    int &operator[](int index) { return m_data[index]; }

    bool empty() const { return !m_data; }
    int capacity() const { return m_max_size; };
    int size() const { return m_size; };
    int *data() const { return m_data; };
    int &at(int index);

    void push_back(int value);
    void insert(int index, int value);

    ~MyVector();
};

#endif