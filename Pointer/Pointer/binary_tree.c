//
//  binary_tree.c
//  Pointer
//
//  Created by 王钱钧 on 14/12/18.
//  Copyright (c) 2014年 王钱钧. All rights reserved.
//

#include "binary_tree.h"

// methods
// http://www.thegeekstuff.com/2013/02/c-binary-tree/

void insert(node **tree, int val)
{
    node *temp = NULL;
    if (!(*tree)) {
//        temp = (node *)malloc(sizeof(node));
        temp = (node *)calloc(1, sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    
    if (val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}

// 前序
void print_preorder(node *tree)
{
    if (tree)
    {
        printf("%d\n", tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }
}

// 中根次序
void print_inorder(node *tree)
{
    if (tree)
    {
        print_inorder(tree->left);
        printf("%d\n", tree->data);
        print_inorder(tree->right);
    }
}

//后根次序
void print_postorder(node * tree)
{
    if (tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->data);
    }
}

void deltree(node *tree)
{
    if (tree) {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

node *search(node **tree,  int val)
{
    if (!(*tree)) {
        return NULL;
    }
    
    if (val < (*tree)->data) {
        return  search(&((*tree)->left), val);
    }
    
    else if (val > (*tree)->data) {
       return  search(&((*tree)->right), val);
    }
    
    else if(val == (*tree)->data) {
        return *tree;
    } else {
        return NULL;
    }
}