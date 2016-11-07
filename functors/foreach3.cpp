//
//  foreach3.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MeanValue
{
private:
    long num;
    long sum;
public:
    MeanValue() : num(0), sum(0)
    {
        
    }
    
    void operator() (int elem)
    {
        num++;
        sum += elem;
    }
    
    double value()
    {
        return static_cast<double>(sum) / static_cast<double>(num);
    }
    
};

class Nth
{
private:
    int nth;
    int count;
public:
    Nth(int n) : nth(n), count(0)
    {
        
    }
    bool operator() (int)
    {
        return ++count == nth;
    }
};


int main()
{
    vector<int> coll;
    
    for (int i = 0; i < 9; ++i)
    {
        coll.push_back(i);
    }
    
    MeanValue mv = for_each(coll.begin(), coll.end(), MeanValue());
    cout << "MeanValue: " << mv.value() << endl;
    
    
}


