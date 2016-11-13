//
//  Solution5.cpp
//  cpp
//
//  Created by Feast on 2016/11/13.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Printer
{
public:
    vector<int> printMatrix(vector<vector<int> > mat, int n, int m)
    {
        vector<int> ret;
        for (int i = 0; i < n; ++i)
            if (i % 2 != 0)
                reverse(mat[i].begin(), mat[i].end());
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                ret.push_back(mat[i][j]);
        return ret;
    }
};
