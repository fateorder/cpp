//
//  Solution11.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int tmp;
    while (b)
    {
        tmp = b; b = a % b ; a = tmp;
    }
    return a;
}

int main()
{
    int a, n;
    int temp;
    while (cin >> n >> a)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> temp;
            if (a >= temp)  a += temp;
            else            a+= gcd(temp, a);
        }
        cout << a << endl;
    }
}
