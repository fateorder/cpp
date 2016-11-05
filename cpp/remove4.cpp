//
//  remove4.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> coll;
    
    for (int i = 0; i <= 9; ++i) {
        coll.push_back(i);
        coll.push_front(i);
    }
    coll.erase(remove(coll.begin(), coll.end(), 3), coll.end());
    coll.remove(4);
}
