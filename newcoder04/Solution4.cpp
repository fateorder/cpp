

//
//  Solution4.cpp
//  cpp
//
//  Created by Feast on 2016/11/14.
//  Copyright © 2016年 Feast. All rights reserved.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    long l;
    vector<long> v;
    int tmp;
    while(cin >> n >>l){
        v.clear();
        while(n--){
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        
        long maxm=0;
        for(int i=0;i<v.size()-1;++i){
            if(v[i+1]-v[i]>maxm)
                maxm = v[i+1]-v[i];
        }
        int bianjie = max(2*(l-v[v.size()-1]),2*v[0]);
        if(maxm< bianjie)
            maxm = bianjie;
        
        printf("%.2f\n",maxm/2.0);
        
    }
    return 0;
}
