//
//  Solution2.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <vector>
#include <iostream>
using namespace std;

class Clearer {
public:
    vector<vector<int> > clearZero(vector<vector<int> > mat, int n) {
        int *b1 = new int[n];
        int *b2 = new int[n];
        memset(b1, 0, sizeof(b1));
        memset(b2, 0, sizeof(b2));
        
        int i ,j;
        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j)
                if (!mat[i][j]) { b1[i] = 1; b2[j] = 1;}
        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j)
                if (b1[i] == 1 || b2[j] == 1) mat[i][j] = 0;
        return mat;
        
    }
};

