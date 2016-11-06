//
//  map1.cpp
//  cpp
//
//  Created by Feast on 2016/11/6.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    typedef map<string, float> StringFloatMap;
    
    StringFloatMap stocks;
    
    stocks["BASF"] = 369.50;
    stocks["Daimler"] = 819.00;
    stocks["BMW"] = 834;
    stocks["Siemens"] = 842.20;
    
    StringFloatMap::iterator pos;
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        cout << "stock: " << pos->first << "\t"
             << "price: " << pos->second << endl;
    }
    cout << endl;
    
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        pos->second *= 2;
    }
    
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        cout << "stock: " << pos->first << "\t"
        << "price: " << pos->second << endl;
    }
    cout << endl;
    stocks["Volkswagen"] = stocks["VW"];
    stocks.erase("VW");
    
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        cout << "stock: " << pos->first << "\t"
        << "price: " << pos->second << endl;
    }
    cout << endl;
    
    
}
