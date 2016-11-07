//
//  Solution17.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <vector>


class LongestDistance
{
public:
    int getDis(std::vector<int> A, int n)
    {
        if (n < 2) return 0;
        int max = 0, min = A[0];
        for (int i = 0; i < n ; ++i)
        {
            max = std::max(max, A[i] - min);
            min = std::min(min, A[i]);
        }
        return max;
    }
};
