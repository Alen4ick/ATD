#include <iostream>

template <typename T>
class Set{
    public:
    size_t size{0};
    Set() = default;
    Set(const Set& another_set);
    ~Set();
    bool isEmpty();
    size_t Size();
    void Add(T& value);
    void Remove(T& value);
    T* Find(T& value);
    void operator^=(const Set& another_set);
    void operator&=(const Set& another_set);
    void operator|=(const Set& another_set);
};