//
//  Solution8.cpp
//  cpp
//
//  Created by Feast on 2016/11/13.
//  Copyright © 2016年 Feast. All rights reserved.
//

//运行通过
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
    int number;
    while (cin >> number)
    {
        int* xptr = new int[number];
        int* yptr = new int[number];
        for (int i = 0; i < number; ++i)
            cin >> xptr[i] >> yptr[i];
        int minX, minY, maxX, maxY;
        minX = maxX = xptr[0];
        minY = maxY = yptr[0];
        
        for (int i = 1; i < number; ++i)
        {
            if (xptr[i] < minX   )   minX = xptr[i];
            if (maxX    < xptr[i])   maxX = xptr[i];
            if (yptr[i] < minY   )   minY = yptr[i];
            if (maxY    < yptr[i])   maxY = yptr[i];
        }
        
        int xLength = maxX - minX;
        int yLength = maxY - minY;
        int minArea;
        if (xLength > yLength)
                minArea = xLength * xLength;
        else    minArea = yLength * yLength;
        
        delete [] xptr;
        delete [] yptr;
        cout << minArea << endl;
    }
    return 0;
}
