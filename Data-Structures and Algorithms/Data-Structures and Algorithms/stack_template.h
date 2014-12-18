//
//  stack_template.h
//  Data-Structures and Algorithms
//
//  Created by 王钱钧 on 14/12/18.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#ifndef __Data_Structures_and_Algorithms__stack_template__
#define __Data_Structures_and_Algorithms__stack_template__

#include <stdio.h>

template <class T, int MaxStack>
class Stack {
    int EmptyStack;
    T items[MaxStack];
    int top;
    
public:
    
    Stack();
    
    ~Stack();
    
    void push(T);
    
    T pop();
    
    int empty();
    
    int full();
};

#endif /* defined(__Data_Structures_and_Algorithms__stack_template__) */
