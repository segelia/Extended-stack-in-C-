#include <iostream>
#include "Stack.h"

int main()
{
    Stack myStack;

    // // Pushing and popping a small amount of values
    // myStack.push(10);
    // myStack.push(20);
    // myStack.push(30);

    // while (!myStack.isEmpty()) {
    //     std::cout << "Popped: " << myStack.pop() << std::endl;
    // }

    // // Pushing a lot of values onto the stack
    // for(int i = 0;i<=1000;i++){
    //     myStack.push(i);
    // }

    // while (!myStack.isEmpty()) {
    //     std::cout << "Popped: " << myStack.pop() << std::endl;
    // }

    // // Popping from an empty stack
    // myStack.push(10);
    // myStack.push(20);
    // myStack.push(30);

    // while (!myStack.isEmpty()) {
    //     std::cout << "Popped: " << myStack.pop() << std::endl;
    // }

    // myStack.pop();

    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    Stack s2(s1);

    while (!s1.isEmpty())
    {
        std::cout << "Popped: " << s1.pop() << std::endl;
    }

    // while (!s2.isEmpty())
    // {
    //     std::cout << "Popped: " << s2.pop() << std::endl;
    // }

    Stack s3 = s1;

    while (!s3.isEmpty())
    {
        std::cout << "Popped: " << s3.pop() << std::endl;
    }

    Stack s4;
    s4.push(10);
    s4 = s1;

    // while (!s4.isEmpty())
    // {
    //     std::cout << "Popped: " << s4.pop() << std::endl;
    // }

    return 0;
}
