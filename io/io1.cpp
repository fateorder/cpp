//
//  io1.cpp
//  cpp
//
//  Created by Feast on 2016/11/9.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Multiplication of two float point values" << endl;
    cout << "first operand: ";
    if(!(cin >> x))
    {
        cerr << "error while reading the first floating " << endl;
        return EXIT_FAILURE;
    }
    if(!(cin >> y))
    {
        cerr << "error while reading the first floating " << endl;
        return EXIT_FAILURE;
    }
    
    cout << x << "times: " << y << endl
         << x * y << endl;
    
}
