//
// Created by muhammadaugi on 08/07/23.
//

#include "stack1.hpp"
#include <deque>
#include <string>
#include <cassert>

template<>
class Stack<std::string> {
private:
    std::deque<std::string> elems;
public:
    void push(std::string const&);
    void pop();
    std::string const& top() const;
    bool empty() const {
        return elems.empty();
    }

};

void Stack<std::string>::push(const std::string &elem) {
    elems.push_back(elem);
}

void Stack<std::string>::pop (){
    assert(!elems.empty());
    elems.pop_back();
}

std::string const& Stack<std::string>::top() const {
    assert(!elems.empty());
    return elems.back()
}

#ifndef STACK2_HPP
#define STACK2_HPP

#endif //STACK2_HPP
