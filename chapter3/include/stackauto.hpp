//
// Created by muhammadaugi on 22/07/23.
//

#include <array>
#include <cassert>

#ifndef STACK_TEST_HPP
#define STACK_TEST_HPP

template<typename T, auto Maxsize>
class Stack {
public:
    using size_type = decltype(Maxsize);
private:
    std::array<T, Maxsize> elems;
    size_type numElems;

public:
    Stack();
    void push(T const& elem);
    void pop();
    T const& top() const;
    bool empty() const {
        return numElems == 0;
    }
    size_type size() const {
        return numElems;
    }
};


template<typename T, auto Maxsize>
Stack<T, Maxsize>::Stack() : numElems(0){}

template<typename T, auto Maxsize>
void Stack<T, Maxsize>::push(const T &elem) {
    assert(numElems < Maxsize);
    elems[numElems] = elem;
    ++numElems;
}

template<typename T, auto Maxsize>
void Stack<T, Maxsize>::pop() {
    assert(!elems.empty());
    --numElems;
}

template<typename T, auto Maxsize>
T const& Stack<T, Maxsize>::top() const {
    assert(!elems.empty());
    return elems[numElems-1];
}


#endif //STACK_TEST_HPP
