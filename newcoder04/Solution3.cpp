//
//  Solution3.cpp
//  cpp
//
//  Created by Feast on 2016/11/14.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
    val(x), left(NULL), right(NULL) {}
}

class Balance
{
public:
    bool isBalance(TreeNode* root)
    {
        int high = 0;
        return isBalance1(root, high);
    }
    
    bool isBalance1(TreeNode* root, int& high)
    {
        if (root == NULL)
        {
            high = 0;
            return true;
        }
        int lhigh, rhigh;
        if (!isBalance1(root->left, lhigh) || !isBalance1(root->right, rhigh))
            return false;
        if (lhigh - rhigh > 1 || lhigh - rhigh < -1)
            return false;
        high = (lhigh >= rhigh ? lhigh : rhigh) + 1;
        return true;
    }
};
