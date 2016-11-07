//
//  Solution20.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int input;
    while (cin >> input)
    {
        string str;
        vector<string> vs;
        while (input--)
        {
            cin >> str;
            vs.push_back(str);
        }
        sort(vs.begin(), vs.end());
        vector<string>::iterator vit;
        for (vit = vs.begin(); vit != vs.end(); vit++)
        {
            cout << *vit << endl;
        }
    }
    
    return 0;
}
