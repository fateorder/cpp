//
//  solution01.cpp
//  cpp
//
//  Created by Feast on 2016/11/16.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void scan(vector<vector<int> > field, int N, int M, int result[])
{
    for (int i = 0; i < N - 2; ++i)
    {
        for (int j = 0; j < M - 2; ++j)
        {
            int tmp = 0;
            for (int p = i; p < i + 3; ++p)
                for (int q = j; q < j + 3; ++q)
                    if (field[p][q] > 0)
                        ++tmp;
                    
            if (result[0] < tmp)
            {
                result[0] = tmp;
                result[1] = i;
                result[2] = j;
            }
        }
    }
}

int main()
{
    int N, M, K;
    int x, y;
    while (cin >> N >> M >> K)
    {
        if (N < 3)
            N = 3;
        if (M < 3)
            M = 3;
        vector<vector<int> > field(N, vector<int>(M,0));
        while (K--)
        {
            cin >> x >> y;
            ++field[x - 1][y - 1];
        }
        
        int first[3] = {0};
        int second[3] = {0};
        scan(field, N, M, first);
        
        for (int i = first[1]; i < first[1] + 3; ++i) {
            for (int j = first[2]; j < first[2] + 3; ++j) {
                if (field[i][j] > 0) {
                    --field[i][j];
                }
            }
        }
        scan(field, N, M, second);
        cout << first[0] + second[0] << endl;
    }
    return 0;
}
