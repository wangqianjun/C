//
//  stack_using_linked.c
//  Data-Structures and Algorithms
//
//  Created by 王钱钧 on 14/12/19.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#include "stack_using_linked.h"


void init_linked_stack(struct node *head) {
    head = NULL;
}

struct node *push_linked_stack(struct node *head, int data) {
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    if (tmp == NULL) {
        exit(0);
    }
    
    tmp->data = data;
    tmp->next = head;
    head = tmp;
    return head;
}

struct node *pop_linked_stack(struct node *head, int *element) {
    struct node *tmp = head;
    *element = head->data;
    head = head->next;
    free(tmp);
    return head;
}

int empty_linked_stack(struct node *head) {
    return head == NULL ? 1 : 0;
}

void display_linked_stack(struct node *head) {
    struct node *current;
    current = head;
    if (current != NULL) {
        printf("Stack: ");
        do {
            printf("%d ", current->data);
            current = current->next;
        } while (current != NULL);
        printf("\n");
    } else {
         printf("The Stack is empty\n");
    }
}