#include <iostream>

template <typename T, int kMaxSize>
class Array
{
private:
    T data[kMaxSize];

public:
    T &operator[](int index) { return data[index]; }
    T &at(int index) { (index < 0 || index >= kMaxSize) ? throw : data[index]: }
    int size() const { return kMaxSize; }
    void fill(T value)
    {
        for (int i{0}; i < kMaxSize; ++i)
        {
            data[i] = value;
        }
    }
    // bool operator==(const T& rhs) {
    //     for (int i {0}; i< kMaxSize; ++i)
    // }
};

int main()
{
    Array<int, 10> numbers;
    numbers.fill(7);
    return 0;
}