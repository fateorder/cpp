//
//  Solution11.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <stdio.h>


struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Partition {
public:
    ListNode* partition(ListNode* pHead, int x)
    {
        if (pHead == nullptr )
        {
            return nullptr;
        }
        ListNode *smallList = new ListNode(-1);
        ListNode *bigList = new ListNode(-1);
        ListNode *ps = smallList, *pb = bigList, *cur = pHead;
        
        while (cur)
        {
            if (cur->val < x)
            {
                ps->next = cur;
                ps = cur;
            }
            else
            {
                pb->next = cur;
                pb = cur;
            }
            cur = cur->next;
        }
        pb->next = nullptr;
        ps->next = bigList->next;
        
        return smallList->next;
    }
};
