#include<iostream>


template<typename T>
class Stack{
    private:
        T *ptr; // Указатель на стек (через него будет сделан массив на куче)
        size_t size; // Размер нашего стека
        size_t top; // Номер верхнего элемента
    public:
    Stack(size_t = 10); // Умолчательный конструктор
    Stack(const Stack& stack); // Конструктор копирования
    ~Stack();
    bool Is_Empty(const Stack& stack);
    bool Is_Full(const Stack& stack);
    T Top(const Stack& stack);
    T pop(Stack& stack); // Мы удалим верхний элемент и вернем его
    void push(Stack& stack);
    size_t len(const Stack& stack);
};






