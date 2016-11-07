//
//  Solution6.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
using namespace std;

int f(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    return f(n-2)+1;
}

int main()
{
    int n;
    while(cin >> n){
        if(n==0)
            break;
        cout<<f(n)<<endl;
    }
    return 0;
}
