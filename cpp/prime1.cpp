//
//  prime1.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <list>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool isPrime(int number)
{
    number = abs(number);
    
    if(number == 0 || number == 1) return true;
    
    int divisor;
    for (divisor = number / 2; number % divisor != 0; --divisor) {
        ;
    }
    
    return divisor == 1;
}

int main()
{
    list<int> coll;
    for (int i = 24; i <= 30; ++i) {
        coll.push_back(i);
    }
    list<int>::iterator pos;
    
    pos = find_if(coll.begin(), coll.end(), isPrime);
    
    if(pos != coll.end()){
        cout << *pos << " is the first prime " << endl;
    } else {
        cout << "No prime " << endl;
    }
    
    
}



