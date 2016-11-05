//
//  copy.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    list<int> coll1;
    vector<int> coll2;
    
    for (int i = 0; i <= 9; ++i) {
        coll1.push_back(i);
    }
    copy(coll1.begin(), coll1.end(), coll2.begin());
    
}
