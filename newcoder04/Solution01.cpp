//
//  Solution01.cpp
//  cpp
//
//  Created by Feast on 2016/11/14.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

class Apples
{
public:
    int getInitial(int n)
    {
        // write code here
        int sum = pow(n, n) + 1 - n;
        return sum;
    }
};


