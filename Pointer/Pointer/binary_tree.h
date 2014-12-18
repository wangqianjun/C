//
//  binary_tree.h
//  Pointer
//
//  Created by 王钱钧 on 14/12/18.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#ifndef __Pointer__binary_tree__
#define __Pointer__binary_tree__

#include <stdio.h>
#include <stdlib.h>

struct bin_tree {
    int data;
    struct bin_tree *right, *left;
};

typedef struct bin_tree node;


// methods
void insert(node **, int );
void print_preorder(node *);
void print_inorder(node *);
void print_postorder(node *);
void print_deltree(node *);

node *search(node **tree, int val);

#endif /* defined(__Pointer__binary_tree__) */
