//
//  iterbug1.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> coll1;
    vector<int> coll2;
    
    vector<int>::iterator pos = coll1.begin();
    reverse(++pos, coll1.end());
    
    for (int i = 0; i <= 9; ++i) {
        coll2.push_back(i);
    }
    copy(coll1.begin(), coll1.end(), coll1.begin());
    
    copy(coll1.begin(), coll2.end(), coll2.begin());
    
}
