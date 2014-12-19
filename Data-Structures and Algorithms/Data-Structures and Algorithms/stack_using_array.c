//
//  stack_using_array.c
//  Data-Structures and Algorithms
//
//  Created by 王钱钧 on 14/12/18.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#include "stack_using_array.h"

/*
 initialize stack pointer
 */
void init_arr(int *top) {
    *top = 0;
}

/*
 push an element into stack
 precondition: the stack  is not full
 */
void push_arr(int *s, int *top, int element) {
    s[(*top)++] = element;
}

/*
 remove an element form stack
 precondition: stack is not empty
 */
int pop_arr(int *s, int *top) {
    return s[--(*top)];
}

/*
 return 1 if stack is full, otherwise return 0
 */
int full_arr(int *top, const int size) {
    return *top == size ? 1 : 0;
}

/*
 return 1 if stack is empty, otherwise return 0
 */
int empty_arr(int *top) {
    return *top == 0 ? 1 : 0;
}

/*
 display stack content
 */
void display_arr(int *s, int *top) {
    printf("Stack: ");
    int i;
    for (i = 0; i < *top; i++) {
        printf("%d, ",s[i]);
    }
    printf("\n");
}