//
//  ioiter1.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> coll;
    
    copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(coll));
    
    sort(coll.begin(), coll.end());
    
    unique_copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
    
    
}
