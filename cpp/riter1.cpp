//
//  riter1.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> coll;
    
    for (int i = 0; i <= 9; ++i) {
        coll.push_back(i);
    }
    
    copy(coll.rbegin(), coll.rend(), ostream_iterator<int>(cout, " "));
    cout << endl;
    
}

