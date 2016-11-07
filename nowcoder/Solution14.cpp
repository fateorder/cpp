//
//  Solution14.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//


#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> ss;
    string s;
    
    while (cin >> s)
    {
        ss.push(s);
    }
    while (!ss.empty())
    {
        cout << ss.top();
        ss.pop();
        if (!ss.empty()) cout << ' ';
    }
    cout << endl;
    
    return 0;
}
