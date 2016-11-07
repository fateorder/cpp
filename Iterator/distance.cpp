//
//  distance.cpp
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
    for (int i = -3; i < 9; ++i)
    {
        coll.push_back(i);
    }
    list<int>::iterator pos;
    pos = find(coll.begin(), coll.end(), 3);
    
    if (pos != coll.end())
    {
        cout << distance(coll.begin(), pos) << endl;
    }
    else
    {
        cout << "No";
    }
}
