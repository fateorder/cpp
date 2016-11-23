//
//  Solution05.cpp
//  cpp
//
//  Created by Feast on 2016/11/23.
//  Copyright © 2016年 Feast. All rights reserved.
//


class Count2
{
public:
    int countNumberOf2s(int n)
    {
        if (n <= 1) return 0;
        
        long res = 0, m;
        for (m = 1; m < n; m *= 10)
        {
            int tmp1 = n / m, tmp2 = n % m;
            res += (tmp1 + 7) / 10 * m + (tmp1 % 10 == 2) * (tmp2 + 1);
        }
        return res;
    }
};
