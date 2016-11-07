
//
//  Solution9.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;

class Reverse
{
public:
    string reverseString(string iniString)
    {
        int len = iniString.size();
        for (int i = 0; i < (len >> 1); ++i) {
            char temp = iniString[i];
            iniString[i] = iniString[len - 1 - i];
            iniString[len - 1 - i] = temp;
        }
        return iniString;
    }
};
