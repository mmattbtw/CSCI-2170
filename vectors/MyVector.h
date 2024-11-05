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
    int capacity() const { return m_max_size; };
    int size() const { return m_size; };
    int *data() const { return m_data; };

    int at(int index) const;
    void push_back(int value);

    ~MyVector();
};

#endif