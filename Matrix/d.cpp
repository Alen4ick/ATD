#include<iostream>

template<typename T>
class Matrix{
    private:
    size_t i{},j{};
    public:
    Matrix() = default;
    Matrix(size_t i, size_t j);
    Matrix(const Matrix& matrix);
    ~Matrix() = default;
    T* operator[](size_t i);
    T* Size();
};