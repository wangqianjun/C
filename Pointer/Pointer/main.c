//
//  main.c
//  Pointer
//
//  Created by 王钱钧 on 14/12/18.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#include <stdio.h>
#include "binary_tree.h"

void test_array();
void test_array_prama(int arr[]);

void test_binary_tree();

int main(int argc, const char * argv[]) {
    
    char *pc;
    pc = "C Language";
    
//    test_array();
    
    test_binary_tree();
    
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

void test_binary_tree() {
    node *root;
    node *tmp;
    root = NULL;
    
    /* Inserting nodes into tree */
    insert(&root, 9);
    insert(&root, 4);
    insert(&root, 15);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 17);
    insert(&root, 2);
    
    printf("Pre Order Display\n");
    print_preorder(root);
    
    printf("In Order Display\n");
    print_inorder(root);
    
    printf("Post Order Display\n");
    print_postorder(root);
    
    /* Search node into tree */
    tmp = search(&root, 4);
    
    if (tmp)
    {
        printf("Searched node=%d\n", tmp->data);
    }
    else
    {
        printf("Data Not found in tree.\n");
    }
    
    /* Deleting all nodes of tree */
    deltree(root);
}


