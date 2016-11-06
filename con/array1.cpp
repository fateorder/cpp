//
//  array1.cpp
//  cpp
//
//  Created by Feast on 2016/11/6.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int coll[] = {5, 2, 1, 3, 5, 6};
    transform(coll, coll + 6, coll, coll, multiplies<int>());
    sort(coll + 1, coll + 6);
    copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
    cout << endl;
    
}
