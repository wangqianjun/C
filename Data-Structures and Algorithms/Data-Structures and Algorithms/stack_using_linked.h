//
//  stack_using_linked.h
//  Data-Structures and Algorithms
//
//  Created by 王钱钧 on 14/12/19.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#ifndef __Data_Structures_and_Algorithms__stack_using_linked__
#define __Data_Structures_and_Algorithms__stack_using_linked__

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
//typedef struct node N;

/* stack method */
void init_linked_stack(struct node *head);
struct node *push_linked_stack(struct node *head, int data);
struct node *pop_linked_stack(struct node *head, int *element);
void display_linked_stack(struct node *head);
int empty_linked_stack(struct node *head);


#endif /* defined(__Data_Structures_and_Algorithms__stack_using_linked__) */
