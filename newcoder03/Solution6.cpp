

//
//  Solution6.cpp
//  cpp
//
//  Created by Feast on 2016/11/13.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Palindrome
{
public:
    bool isPalindrome(ListNode* pHead)
    {
        if (pHead == NULL) return true;
        stack<int> ss;
        ListNode* p = pHead;
        ListNode* q = pHead;
        ss.push(p->val);
        while (q->next != NULL && q->next->next != NULL)
        {
            p = p->next;
            ss.push(p->val);
            q = q->next->next;
        }
        if(q->next == NULL) ss.pop();
        p = p->next;
        while (!ss.empty())
        {
            if (ss.top() != p->val) break;
            p = p->next;
            ss.pop();
        }
        if (ss.empty()) return true;
        else            return false;
    }
};












