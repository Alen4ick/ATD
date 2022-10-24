#include <iostream>
template<typename T>
class Queue {
    public:
    Queue() = default;
    Queue(const Queue& queue);
    ~Queue();

    T top(const Queue& queue);
    T pop(Queue& queue);
    void push(Queue& queue, T value);
};
