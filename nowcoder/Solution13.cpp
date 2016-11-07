//
//  Solution13.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//


#include <iostream>
using namespace std;

class Zipper
{
public:
    string zipString(string iniString)
    {
        string str;
        int i = 0,j = 0;
        while (i < iniString.length())
        {
            while (iniString[i] == iniString[j]) i++;
            str += iniString[j];
            str += to_string(i-j);
            j = i;
        }
        return (iniString.length() < str.length()) ? iniString : str;
    }
};
