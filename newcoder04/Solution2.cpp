//
//  Solution2.cpp
//  cpp
//
//  Created by Feast on 2016/11/14.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>

struct ListNode
{
    int val;
    struct ListNode* next;
    ListNode(int x) : val(x), next(NULL){}
};

class Remove
{
public:
    bool removeNode(ListNode* pNode)
    {
        if (pNode == NULL || (pNode != NULL && pNode->next == NULL))
            return false;
        pNode->val = pNode->next->val;
        pNode->next = pNode->next->next;
        delete pNode->next;
        return true;
        
    }
};
