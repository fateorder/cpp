//
//  Solution4.cpp
//  cpp
//
//  Created by Feast on 2016/11/8.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <vector>
#include <iostream>
using namespace std;

class Transform {
public:
vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
    // write code here
    int i,j,temp=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n/2;j++)
        {
            temp=mat[i][j];
            mat[i][j]=mat[i][n-1-j];
            mat[i][n-1-j]=temp;
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-i;j++)
        {
            temp=mat[i][j];
            mat[i][j]=mat[n-1-j][n-1-i];
            mat[n-1-j][n-1-i]=temp;
        }
    }
    return mat;
}

};
