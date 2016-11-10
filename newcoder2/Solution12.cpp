//
//  Solution12.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Flip {
public:
    vector<vector<int> > flipChess(vector<vector<int> > A, vector<vector<int> > f) {
        for(int i=0;i<f.size();i++){
            if(f[i][0]-2>=0)//上
                A[f[i][0]-2][f[i][1]-1]^=1;
            if(f[i][0]<A.size())//下
                A[f[i][0]][f[i][1]-1]^=1;
            if(f[i][1]-2>=0)//左
                A[f[i][0]-1][f[i][1]-2]^=1;
            if(f[i][1]<A.size())//右
                A[f[i][0]-1][f[i][1]]^=1;
        }
        return A;
    }
};
