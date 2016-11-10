//
//  Solution5.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Replacement
{
public:
    string replaceSpace(string iniString, int length)
    {
        string newStr;
        
        for (int i = 0; i < length; ++i)
        {
            if (iniString[i] == ' ')
            {
                newStr.push_back('%');
                newStr.push_back('2');
                newStr.push_back('0');
            }
            else
            {
                newStr.push_back(iniString[i]);
            }
        }
        return newStr;
    }
};
