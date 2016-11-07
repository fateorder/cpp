//
//  Solution1.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>


class Solution
{
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        if (str ==NULL || rows <= 0 || cols <= 0)
            return false;
        bool *flag = new bool[rows * cols];
        memset(flag, false, rows*cols);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j) {
                if (isHasPath(matrix, rows, cols, i, j, str, 0, flag))
                    return true;
            }
        }
        delete[] flag;
        return false;
    }
    
    bool isHasPath(char* matrix, int rows, int cols, int i, int j, char* str, int k, bool* flag)    {
        int index = i * cols + j;
        if(i<0 || i>=rows || j<0 || j>=cols || matrix[index]!=str[k] || flag[index]==true)
            return false;
        if(str[k+1]=='\0') return true;
        
        flag[index] = true;
        if(  isHasPath(matrix, rows, cols, i - 1, j,     str, k + 1, flag)
           ||isHasPath(matrix, rows, cols, i + 1, j,     str, k + 1, flag)
           ||isHasPath(matrix, rows, cols, i,     j - 1, str, k + 1, flag)
           ||isHasPath(matrix, rows, cols, i,     j + 1, str, k + 1, flag))
        {
            return true;
        }
        flag[index] = false;
        return false;
    }
    
};
