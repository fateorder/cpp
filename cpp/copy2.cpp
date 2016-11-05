//
//  copy2.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    list<int> coll1;
    vector<int> coll2;
    
    
    for (int i = 0; i <= 9; ++i) {
        coll1.push_back(i);
    }
    
    coll2.resize(coll1.size());
    
    copy(coll1.begin(), coll1.end(), coll2.begin());
    
    deque<int> coll3(coll1.size());
    
    copy(coll1.begin(), coll1.end(), coll3.begin());
    
}
