//
//  Solution10.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string start;
    cin >> start;
    
    copy(start.rbegin(), start.rend(), ostream_iterator<char>(cout));
    return 0;
}
