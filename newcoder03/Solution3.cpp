//
//  Solution3.cpp
//  cpp
//
//  Created by Feast on 2016/11/12.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <vector>
#include <iostream>
using namespace std;

class Bonus
{
public:
    int getMost(vector<vector<int> > board)
    {
        int p[6][6] = {0};
        p[0][0] = board[0][0];
        for (int i = 1; i < 6; ++i)
        {
            p[i][0] = p[i-1][0] + board[i][0];
            p[0][i] = p[0][i-1] + board[0][i];
        }
        for (int i = 1; i < 6; ++i)
            for (int j = 1; j < 6; ++j)
            {
                int a=p[i][j-1]>p[i-1][j]?p[i][j-1]:p[i-1][j];
                p[i][j]=a+board[i][j];
            }
        return p[5][5];
    }
};
