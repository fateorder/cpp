//
//  Solution13.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
using namespace std;

struct TreeNode
{
    struct TreeNode *left;
    struct TreeNode *right;
    int val;
};


class Solution {
public:
    int run(TreeNode *root) {
        if(!root)
            return 0;
        int l = run(root->left);
        int r = run(root->right);
        if(l==0 || r==0)
            return 1+l+r;
        return 1+min(l,r);
    }
};
