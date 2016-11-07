//
//  Solution7.cpp
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
    cin >> n;
    char tmp;
    while (n)
    {
        tmp = n % 10 + '0';
        cout << tmp;
        n /= 10;
    }
    return 0;
}
