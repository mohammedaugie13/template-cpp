#include "../include/stack1.hpp"
#include "../include/stack3.hpp"

#include "../include/shatckpartspec.hpp"
#include <iostream>
#include <string>
#include <deque>

int main(){
    Stack<int> intStack;
    Stack<std::string> stringStack;
    Stack<int*> ptrStack;

    intStack.push(7);
    std::cout << intStack.top() << "\n";

    stringStack.push("hello");
    std::cout << stringStack.top() << "\n";

    ptrStack.push(new int{42});
    std::cout << *ptrStack.top() << "\n";


    Tumpukan<double, std::deque<double>> dblStack;

    dblStack.push(42.42);
    std::cout << dblStack.top() << "\n";
}