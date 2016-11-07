//
//  foreach1.cpp
//  cpp
//
//  Created by Feast on 2016/11/6.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include "algostuff.hpp"
using namespace std;

void print (int elem)
{
    cout << elem << ' ';
}

template <class T>
class AddValue
{
private:
    T thevalue;
public:
    AddValue (const T& v) : thevalue(v)
    {
        
    }
    void operator() (T& elem)
    {
        elem += thevalue;
    }
};

int main()
{
    vector<int> coll;
    INSERT_ELEMENTS(coll, 3, 9);
    for_each(coll.begin(), coll.end(), print);
    cout << endl;
    
    for_each(coll.begin(), coll.end(), AddValue<int>(10));
    for_each(coll.begin(), coll.end(), print);
    cout << endl;
    
    for_each(coll.begin(), coll.end(), AddValue<int>(*coll.begin()));
    for_each(coll.begin(), coll.end(), print);
    cout << endl;
    
    
}



