//
//  foreach2.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class PrintInt {
    public:
    void operator() (int elem) const {
        cout << elem << ' ';
    }
};

int main()
{
    vector<int> coll;
    for (int i = 0; i <= 9; ++i) {
        coll.push_back(i);
    }
    for_each(coll.begin(), coll.end(), PrintInt());
    cout << endl;
}


