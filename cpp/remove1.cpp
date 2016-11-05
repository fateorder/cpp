//
//  remove1.cpp
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
        coll.push_front(i);
        coll.push_back(i);
    }
    cout << "pre:  ";
    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
    
    remove(coll.begin(), coll.end(), 3);
    
    cout << "post: ";
    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
    
    
}
