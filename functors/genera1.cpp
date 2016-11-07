//
//  genera1.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>
#include "print.hpp"
using namespace std;

class IntSequence
{
private:
    int value;
    
public:
    IntSequence (int initialValue) : value(initialValue)
    {
    }
    
    int operator() ()
    {
        return value++;
    }
    
};

int main()
{
    list<int> coll;
//    generate_n(back_inserter(coll), 9, IntSequence(1));
//    PRINT_ELEMENTS(coll);
//    
//    generate(coll.begin(), coll.end(), IntSequence(42));
//    PRINT_ELEMENTS(coll);
//    
//    IntSequence seq(3);
//    generate_n(back_inserter(coll), 9, seq);
//    PRINT_ELEMENTS(coll);
    
    IntSequence seq(1);
    generate_n<back_insert_iterator<list<int> >, int, IntSequence&>(back_inserter(coll), 4, seq);
    PRINT_ELEMENTS(coll);
    
    
}






