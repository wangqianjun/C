//
//  c_queue.h
//  Data-Structures and Algorithms
//
//  Created by 王钱钧 on 14/12/19.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#ifndef __Data_Structures_and_Algorithms__c_queue__
#define __Data_Structures_and_Algorithms__c_queue__

#include <stdio.h>
#include <stdlib.h>

void init_queue(int *head, int *tail);
int empty_queue(int head, int tail);
void enqueue(int *q, int *tail, int element);
int dequeue(int *q, int *head);
int full_queue(int tail, const int size);
void display_queue(int *q, int head, int tail);

#endif /* defined(__Data_Structures_and_Algorithms__c_queue__) */
