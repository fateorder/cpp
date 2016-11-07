
//
//  Solution12.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//


#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[10] = {0};
    int num = 0;
    cin >> n;
    while (n)
    {
        if (a[n % 10] == 0)
        {
            a[n % 10]++;
            num = num * 10 + n % 10;
        }
        n /= 10;
    }
    cout << num << endl;
    return 0;
}
