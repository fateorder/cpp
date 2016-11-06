//
//  deque1.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <deque>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    deque<string> coll;
    coll.assign(3, string("string"));
    coll.push_back("last string");
    coll.push_back("first string");
    
    copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
    cout << endl;
    
    coll.pop_front();
    coll.pop_back();
    
    for (int i = 1; i < coll.size(); ++i) {
        coll[i] = "anthor " + coll[i];
    }
    coll.resize(4, "resized string");
    
    copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
}




