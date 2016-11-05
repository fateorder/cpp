//
//  fo1.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <set>
#include <deque>
#include <algorithm>
#include "print.hpp"
using namespace std;

int main()
{
    set<int, greater<int> > coll1;
    deque<int> coll2;
    for (int i = 0; i <= 9; ++i) {
        coll1.insert(i);
    }
    PRINT_ELEMENTS(coll1,"1. ");
    transform(coll1.begin(), coll1.end(), back_inserter(coll2), bind2nd(multiplies<int>(), 10));
    PRINT_ELEMENTS(coll2, "2. ");
    replace_if(coll2.begin(), coll2.end(), bind2nd(equal_to<int>(), 70), 4);
    PRINT_ELEMENTS(coll2, "3. ");
    coll2.erase(remove_if(coll2.begin(), coll2.end(), bind2nd(less<int>(), 50)), coll2.end());
    PRINT_ELEMENTS(coll2, "4. ");
}
