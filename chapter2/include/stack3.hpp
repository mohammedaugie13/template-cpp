//
// Created by muhammadaugi on 09/07/23.
//

#include <vector>
#include <cassert>

#ifndef STACK3_HPP
#define STACK3_HPP

template<typename T, typename Cont = std::vector<T>>
class Tumpukan{
private:
    Cont elems;
public:
    void push(T const& elem);
    void pop();
    T const& top() const;
    bool empty() const {
        return elems.empty();
    }
};

template<typename T,  typename Cont>
void Tumpukan<T,Cont>::push(const T &elem) {
    elems.push_back(elem);
}

template<typename T, typename Cont>
void Tumpukan<T,Cont>::pop() {
    assert(!elems.empty());
    elems.pop_back();
}

template<typename T, typename Cont>
T const& Tumpukan<T,Cont>::top() const {
    assert(!elems.empty());
    return elems.back();
}


#endif //STACK3_HPP
