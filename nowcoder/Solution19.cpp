//
//  Solution19.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;

class Same
{
public:
    bool checkSam(string stringA, string stringB)
    {
        char str[256] = {0};
        if (stringA.length() != stringB.length()) return false;
        for (int i = 0; i <= stringA.size(); ++i)
        {
            str[stringA[i]]++;
            str[stringB[i]]--;
        }
        
        for (int i = 0; i < 256; ++i)
        {
            if (str[stringA[i]] != 0)
            {
                return false;
            }
        }
        return true;
    }
};



