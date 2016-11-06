//
//  carray1.cpp
//  cpp
//
//  Created by Feast on 2016/11/6.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <functional>
#include <algorithm>
#include "carray.hpp"
#include "print.hpp"
using namespace std;

int main()
{
    carray<int, 10> a;
    for (unsigned i = 0; i <= a.size(); ++i)
    {
        a[i] = i + 1;
    }
    PRINT_ELEMENTS(a);
    reverse(a.begin(), a.end());
    PRINT_ELEMENTS(a);
    transform(a.begin(), a.end(), a.begin(), negate<int>());
    PRINT_ELEMENTS(a);
}
