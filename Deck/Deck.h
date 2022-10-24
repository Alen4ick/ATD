#include<iostream>

template<typename T>
class Deck{
    public:
    Deck() = default;
    Deck(const Deck& deck);
    ~Deck();

    void Push_Front(Deck& deck, T value);
    void Push_Back(Deck& deck, T value);
    T Top(const Deck& deck);
    T Back(const Deck& deck);
    T pop_Top(Deck& deck);
    T pop_Front(Deck& deck);
};