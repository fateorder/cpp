//
//  Solution5.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Different
{
public:
    bool checkDifferent(string iniString)
    {
        sort(iniString.begin(), iniString.end());
        string::iterator pos;
        for (pos = iniString.begin(); pos != iniString.end(); ++pos)
        {
            if (*pos == *++pos) return false;
        }
        
        return true;
    }

};
