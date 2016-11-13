//
//  Solution9.cpp
//  cpp
//
//  Created by Feast on 2016/11/13.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Rotate
{
public:
    vector<vector<int> > rotateMatrix(vector<vector<int> > mat, int n)
    {
        vector<vector<int> > ans(n);
        for (int i = 0; i < n; ++i)
        {
            for (int j = n - 1; j >= 0; --j)
            {
                ans[i].push_back(mat[j][i]);
            }
        }
        return ans;
    }
    
};
