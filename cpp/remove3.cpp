//
//  remove3.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> coll;
    for (int i = 0; i <= 9; ++i) {
        coll.insert(i);
    }
    
    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    
    int num = coll.erase(3);
    cout << "numbers of removed elements " << num << endl;
    
    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    
}
