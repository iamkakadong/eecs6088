//
//  BST.cpp
//  lecture4
//
//  Created by Tianshu Ren on 7/4/15.
//
//

#include "BST.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits>

BST::BST(){
    int a = std::numeric_limits<int>::max();
    root = new node(a);
}

BST::~BST(){
    deleteTree(root);
}

void BST::insert(int val){
    root = insert(val, root);
}

bool BST::find(int val){
    node* curr_node = root;
    while (curr_node != NULL){
        if (curr_node->val == val){
            return true;
        }
        else if (curr_node->val > val){
            curr_node = curr_node->left;
        }
        else{
            curr_node = curr_node->right;
        }
    }
    return false;
}

void BST::print_inorder(){
    printf("Printing tree in order: ");
    printTree(root->left);
    printf("\n");
}

//private method
node* BST::insert(int val, node* n){
    if (n != NULL){
        if (n->val > val){
            n->left = insert(val, n->left);
        }
        else if (n->val < val){
            n->right = insert(val, n->right);
        }
        else{
            printf("number %d already exists in current tree", val);
            return n;
        }
    }
    else{
        n = new node(val);
    }
    return n;
}

//private method
void BST::deleteTree(node* n){
    if (n->left != NULL) {
        deleteTree(n->left);
        delete n->left;
    }
    if (n->right != NULL) {
        deleteTree(n->right);
        delete n->right;
    }
}

//private method
void BST::printTree(node* n){
    if (n != NULL){
        printTree(n->left);
        printf("%d ", n->val);
        printTree(n->right);
    }
}