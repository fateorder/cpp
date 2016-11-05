//
//  algo.cpp
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
    vector<int> coll;
    vector<int>::iterator pos;
    coll.push_back(2);
    coll.push_back(3);
    coll.push_back(4);
    coll.push_back(1);
    coll.push_back(5);
    
    pos = min_element(coll.begin(), coll.end());
    cout << *pos << endl;
    pos = max_element(coll.begin(), coll.end());
    cout << *pos << endl;
    
    sort(coll.begin(), coll.end());
    
    pos = find(coll.begin(), coll.end(), 3);
    
    reverse(pos, coll.end());
    
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        cout << *pos << ' ';
    }
    cout << endl;
    
}
