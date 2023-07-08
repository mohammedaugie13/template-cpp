//
// Created by muhammadaugi on 08/07/23.
//

#include <vector>
#include <cassert>
#include <iostream>
#ifndef STACK1_HPP
#define STACK1_HPP

template<typename T>
class Stack {
private:
    std::vector<T> elems;
public:

    void push(T const& elem);
    void pop();
    T const& top() const;
    bool empty() const {
        return elems.empty();
    }

};



template<typename T>
void Stack<T>::push(const T &elem) {
    elems.push_back(elem);
}

template<typename T>
void Stack<T>::pop(){
    assert(!elems.empty());
    elems.pop_back();
}

template<typename T>
T const& Stack<T>::top() const {
    assert(!elems.empty());
    return elems.back();
}

//template<typename T>
//T Stack<T>::pop()
//{
//    assert(!elems.empty());
//    T elem = elems.back();
//    elems.pop_back();
//    return elem
//}


#endif //STACK1_HPP
