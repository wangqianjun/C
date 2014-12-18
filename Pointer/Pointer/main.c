//
//  main.c
//  Pointer
//
//  Created by 王钱钧 on 14/12/18.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#include <stdio.h>

void test_array();
void test_array_prama(int arr[]);

int main(int argc, const char * argv[]) {
    
    char *pc;
    pc = "C Language";
    
    test_array();
    
    return 0;
}


void set(int i, char c) {
    
}


// 数组指正是指数组的起始地址
void test_array()
{
    int *p_array;
    int a[10];
    
    p_array = a;
    
    for (int i = 0; i < 10; i++) {
        a[i] = i;
        
        printf("a[%d] = %d\n",i, *(p_array+i));
        printf("a[%d] = %d\n",i, *(a+i));
    }
    
    
}


void test_array_prama(int arr[]) {
    
}



