//
//  transform1.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include "print.hpp"

int square(int value)
{
    return value * value;
}

int main()
{
    std::set<int> coll1;
    std::vector<int> coll2;
    for (int i = 0; i <= 9; ++i) {
        coll1.insert(i);
    }
    PRINT_ELEMENTS(coll1, "initialized: ");
    
    std::transform(coll1.begin(), coll1.end(), std::back_inserter(coll2), square);
    PRINT_ELEMENTS(coll2, "squared: ");
    
}
