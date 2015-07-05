//
//  node.h
//  lecture4
//
//  Created by Tianshu Ren on 7/4/15.
//
//

#ifndef __lecture4__node__
#define __lecture4__node__

#include <stdio.h>

class node{
    
public:
    int val;
    node* left;
    node* right;
    node(int inval);
};

#endif /* defined(__lecture4__node__) */
