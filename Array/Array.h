#include<iostream>

template <typename T>
class Array{
    private:
    size_t size; 
    public:
    Array(size_t size = 0);
    Array(const Array& array);
    ~Array();
    size_t find(T& value);
    void push_back(T& value);
    void insert(T& value, size_t idx);
    size_t size();
    void clear();
    T operator[](size_t idx);
};