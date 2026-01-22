#ifndef STACK_H
#define STACK_H

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size);
    ~Stack();

    void push(int value);
    void pop();
    int peek();
    bool isEmpty();
    bool isFull();
    void display();
};

#endif
