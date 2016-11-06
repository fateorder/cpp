//
//  CountChar.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    char a;
    cin >> a;
    int contt = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if(a == str[i] || a == str[i] - 32 || a == str[i] + 32)
            contt++;
    }
    cout << contt << endl;
    
    return 0;
}
