//
//  Solution18.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;

class FirstRepeat
{
public:
    char findFirstRepeat(string A, int n)
    {
        bool coll[128] = {0};
        if (A.size() == 0 || n == 0) return 0;
        
        for (int i = 0; i < n; ++i)
        {
            if (!coll[A[i]]) coll[A[i]] = 1;
            else return A[i];
        }
        return 0;
    }
};
