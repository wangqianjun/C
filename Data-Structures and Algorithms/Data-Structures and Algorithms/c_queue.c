//
//  c_queue.c
//  Data-Structures and Algorithms
//
//  Created by 王钱钧 on 14/12/19.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#include "c_queue.h"

void init_queue(int *head, int *tail) {
    *head = *tail = 0;
}

int empty_queue(int head, int tail) {
    return head == tail ? 1 : 0;
}

void enqueue(int *q, int *tail, int element) {
    q[(*tail)++] = element;
}

int dequeue(int *q, int *head) {
    return q[(*head)++];
}

int full_queue(int tail, const int size) {
    return tail == size;
}

void display_queue(int *q, int head, int tail) {
    int i = tail - 1;
    while (i >= head) {
        printf("%d ",q[i--]);
    }
    printf("\n");
}