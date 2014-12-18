//
//  stack_template.cpp
//  Data-Structures and Algorithms
//
//  Created by 王钱钧 on 14/12/18.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#include "stack_template.h"

template <class T, int MaxStack>
Stack<T, MaxStack>::Stack(){
    EmptyStack = -1;
    top = EmptyStack;
}

template <class T, int MaxStack>
Stack<T, MaxStack>::~Stack() {
    delete[] items;
}

template <class T, int MaxStack>
void Stack<T, MaxStack>::push(T c) {
    items[++top] = c;
}

template <class T, int MaxStack>
T Stack<T, MaxStack>::pop() {
    return items[--top];
}

template <class T, int MaxStack>
int Stack<T, MaxStack>::full() {
    return top + 1 == MaxStack;
}

template <class T, int MaxStack>
int Stack<T, MaxStack>:: empty() {
    return top = EmptyStack;
}