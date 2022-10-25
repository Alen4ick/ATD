#include<iostream>

template<typename T>
class Pr_Queue{
    size_t size{};
    public:
    Pr_Queue() = default;
    Pr_Queue(T &size);
    Pr_Queue(const Pr_Queue& pr_queue);
    T* GetMax(const Pr_Queue& pr_queue);
    void insert(Pr_Queue& pr_queue, const T& value);
    void erase(Pr_Queue& pr_queue, const size_t value);
    T pop(Pr_Queue& pr_queue);
};
