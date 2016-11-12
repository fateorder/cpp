

//
//  Solution1.cpp
//  cpp
//
//  Created by Feast on 2016/11/12.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Plus
{
public:
    ListNode* plusAB(ListNode* a, ListNode* b)
    {
        // head
        ListNode *head = new ListNode(-1);
        ListNode *p    = head;
        ListNode *node = nullptr;
        int c = 0, sum, val1, val2;
        ListNode *pa = a, *pb = b;
        // add
        while (pa != nullptr || pb != nullptr || c!= 0)
        {
            val1 = (pa == nullptr ? 0 : pa->val);
            val2 = (pb == nullptr ? 0 : pb->val);
            sum  = val1 + val2 + c;
            //
            c    = sum / 10;
            node = new ListNode(sum % 10);
            //
            p->next = node;
            p       = node;
            pa      = (pa == nullptr ? nullptr : pa->next);
            pb      = (pb == nullptr ? nullptr : pb->next);
        }
        return head->next;
    }
};

