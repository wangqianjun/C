//
//  main.c
//  Data-Structures and Algorithms
//
//  Created by 王钱钧 on 14/12/18.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#include <stdio.h>
#include "stack_using_array.h"
#include "stack_using_linked.c"
#include "c_queue.h"

void test_stack_arr();

void test_const_pointer();

void test_stack_linked();

void test_queue();

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // const and pointer
    
//    test_const_pointer();
//    test_stack_arr();
    test_queue();
    return 0;
}


// 数组栈
void test_stack_arr() {
    
    const int SIZE = 5; // stack size
    
    int top, elem;
    int stack[SIZE];
    
    init_arr(&top);
    printf("--Push elements into stack --\n");
    /* push elements into stack */
    while (!full_arr(&top, SIZE)) {
        printf("Enter a number to push into the stack:");
        scanf("%d", &elem);
        push_arr(stack, &top, elem);
        display_arr(stack, &top);
    }
    
    printf("Stack is full\n\n");
    printf("--Pop elements into stack --\n");
    
    while (!empty_arr(&top)) {
        elem = pop_arr(stack, &top);
        printf("pop %d from the stack\n",elem);
        display_arr(stack, &top);
    }
    printf("Stack is empty\n");
}

//链表栈
void test_stack_linked() {
    
    struct node *head = NULL;
    int size, element;
    int counter = 0;
    
    printf("Enter the number of stack elements:");
    scanf("%d", &size);
    printf("--- Push elements into the linked stack ---\n");
    
    init_linked_stack(head);
    while (counter < size) {
        printf("Enter a number to push into the stack:");
        scanf("%d",&element);
        head = push_linked_stack(head, element);
        display_linked_stack(head);
        counter++;
    }
    printf("--- Pop elements from the linked stack --- \n");
    while (empty_linked_stack(head) == 0) {
        head = pop_linked_stack(head, &element);
        printf("Pop %d from stack\n",element);
        display_linked_stack(head);
    }
}

// 队列
void test_queue() {
    const int SIZE = 5; /* queue's size */
    int head, tail, element;
    int queue[SIZE];
    
    init_queue(&head,&tail);
    
    printf("--Enqueue elements--\n");
    /* push elements into stack */
    while(!full_queue(tail,SIZE))
    {
        printf("Enter a number to enqueue:");
        scanf("%d",&element);
        
        enqueue(queue,&tail,element);
        
        display_queue(queue,head,tail);
    }
    printf("Queue is full\n\n");
    
    printf("--Dequeue elements --\n");
    while(!empty_queue(head,tail))
    {
        element = dequeue(queue,&head);
        printf("dequeue element %d \n",element);
        
        display_queue(queue,head,tail);
    }
    printf("Queue is empty\n");
}


/*
 常量指针：指针所指地址上的数据是常量（data 常量）  const char *ptr1
 指针常量：指针所指地址是常量（p是常量）           char *const ptr1
 */
void test_const_pointer() {
    char *str1 = "Hello";
    char *str2 = "Hello World";
    
    char *const ptr1 = str1; // 指针常量
    const char *ptr2 = str2; // 常量指针
    
//    ptr1 = str2; //错误 因为这是一个常量指针，改变指向的地址了
//    *ptr2 = "a";   //错误 因为指向的地址是内容是不可以变化的
//    ptr2 = str1;
//    *ptr1 = 100;
    printf("str1 = %p\n", str1);
    printf("str2 = %p\n", str2);
    
    printf("ptr1 = %p\n", ptr1);
    printf("ptr2 = %p\n", ptr2);
    
    printf("*ptr1 = %c\n", *ptr1);
    printf("*ptr2 = %c\n", *ptr2);
    

}