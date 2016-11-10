//
//  Solution9.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
const string dict1="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
const string dict2="bcdefghijklmnopqrstuvwxyza22233344455566677778889999";

char Char_Change(char a)
{
    for (int i = 0; i < dict1.size(); ++i)
        if (dict1[i] == a) return dict2[i];
    return a;
}

int main()
{
    string data;
    while (getline(cin, data))
    {
        for (int i = 0; i < data.size(); ++i)
            data[i] = Char_Change(data[i]);
        cout << data << endl;
    }
    return 0;
}

