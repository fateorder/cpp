//
//  advance1.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> coll;
    for (int i = 0; i < 9; ++i)
    {
        coll.push_back(i);
    }
    list<int>::iterator pos = coll.begin();
    cout << *pos << endl;
    
    advance(pos, 3);
    cout << *pos << endl;
    advance(pos, -1);
    cout << *pos << endl;
    
}

