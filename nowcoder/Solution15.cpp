//
//  Solution15.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int count = 0;
    while (a)
    {
        a &= (a - 1);
        count++;
    }
    cout << count << endl;
}
