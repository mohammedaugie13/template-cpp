//
// Created by muhammadaugi on 09/07/23.
//

#include "stack1.hpp"
#include <iostream>
#ifndef SHATCKPARTSPEC_HPP
#define SHATCKPARTSPEC_HPP

template<typename T>
class Stack<T*>{
private:
    std::vector<T*> elems;
public:
    void push(T*);
    T* pop();
    T* top() const;
    bool empty() const {
        return elems.empty();
    }
};

template<typename T>
void Stack<T*>::push(T* elem) {
    elems.push_back(elem);
}

template<typename T>
T* Stack<T*>::pop() {
    assert(!elems.empty());
    T* p = elems.back();
    elems.pop_back();
    return p;
}

template<typename T>
T* Stack<T*>::top() const {
    std::cout << "Partial" << "\n";
    assert(!elems.empty());
    return elems.back();
}
#endif //SHATCKPARTSPEC_HPP
