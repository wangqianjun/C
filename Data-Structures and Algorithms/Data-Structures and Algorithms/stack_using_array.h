//
//  stack_using_array.h
//  Data-Structures and Algorithms
//
//  Created by 王钱钧 on 14/12/18.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//
/*
 *Stack is a data strcture that works based on principle of last-in first out(LIFO). It means the last element that was added to the stack must be the first one to be removed.
 *
 */

#ifndef __Data_Structures_and_Algorithms__stack_using_array__
#define __Data_Structures_and_Algorithms__stack_using_array__

#include <stdio.h>

//C stack operations
void push_arr(int *s, int *top, int element);
int pop_arr(int *s, int *top);
int full_arr(int *top, const int size);
int empty_arr(int *top);
void init_arr(int *top);
void display_arr(int *s, int *top);


#endif /* defined(__Data_Structures_and_Algorithms__stack_using_array__) */
