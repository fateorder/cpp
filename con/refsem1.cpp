//
//  refsem1.cpp
//  cpp
//
//  Created by Feast on 2016/11/6.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <list>
#include <deque>
#include <algorithm>
#include "countptr.hpp"
using namespace std;

void PrintCountedPtr (CountedPtr<int> elem)
{
    cout << *elem << ' ';
}

int main()
{
    static int values[] = {3, 5, 9, 1, 6, 4};
    
    typedef CountedPtr<int> IntPtr;
    deque<IntPtr> coll1;
    list<IntPtr> coll2;
    
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); ++i)
    {
        IntPtr ptr(new int(values[i]));
        coll1.push_back(ptr);
        coll2.push_front(ptr);
    }
    
    for_each(coll1.begin(), coll1.end(), PrintCountedPtr);
    cout << endl;
    for_each(coll2.begin(), coll2.end(), PrintCountedPtr);
    cout << endl << endl;
    
    *coll1[2] *= *coll1[2];
    (**coll1.begin()) *= -1;
    (**coll2.begin()) = 0;
    
    for_each(coll1.begin(), coll1.end(), PrintCountedPtr);
    cout << endl;
    for_each(coll2.begin(), coll2.end(), PrintCountedPtr);
    cout << endl << endl;

    
}












