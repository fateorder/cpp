//
//  add1.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <list>
#include <iostream>
#include <algorithm>
#include "print.hpp"
using namespace std;

class AddValue {
private:
    int theValue;
public:
    AddValue(int v) : theValue(v){
    }
    
    void operator() (int& elem) const {
        elem += theValue;
    }
};

int main()
{
    list<int> coll;
    for (int i = 0; i <= 9; ++i) {
        coll.push_back(i);
    }
    PRINT_ELEMENTS(coll, "initialize: ");
    for_each(coll.begin(), coll.end(), AddValue(10));
    PRINT_ELEMENTS(coll, "after add 10 ");
    for_each(coll.begin(), coll.end(), AddValue(*++coll.begin()));
    PRINT_ELEMENTS(coll, "after add the first element ");

}

