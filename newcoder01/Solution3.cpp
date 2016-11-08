//
//  Solution3.cpp
//  cpp
//
//  Created by Feast on 2016/11/8.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n, t, c;
    
    while (cin >> n >> t >> c)
    {
        vector<int> val(n);
        int sum = 0, count = 0;
        for (int i = 0; i < n; ++i)
            if (i < c)
                sum += val[i];
        
        if (sum <= t) count++;
        for (int i = 0; i + c < n; ++i)
        {
            sum += val[i + c] - val[i];
            if(sum <= t) count++;
        }
        cout << count << endl;
    }
    return 0;
}
