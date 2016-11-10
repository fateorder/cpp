//
//  Solution6.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <queue>
#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        queue<int> q;
        
        for (int i = 0; i < n; ++i)
            q.push(i);
        int count = 0;
        while (q.size() != 1)
        {
            if (count != 2)
            {
                int b = q.front();
                q.pop();
                q.push(b);
                count++;
            }
            else
            {
                q.pop();
                count = 0;
            }
        }
        int c = q.front();
        cout << c << endl;
    }
    return 0;
}
