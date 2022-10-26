#include<iostream>

template<typename T>
class Map{
    private:
    size_t size{};
    public:
    Map() = default;
    Map(const Map& map);
    ~Map();
    T operator[](const size_t& key);
    void add(const size_t& key, const T& value);
    bool find(const size_t& key);
    void remove(const size_t key);
    size_t Size();



}