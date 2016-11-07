//
//  Solution16.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int count;
    int index, value;
    
    while (cin >> count)
    {
        map<int, int> union_table;
        while (cin >> index >> value)
        {
            if (union_table.find(index) != union_table.end())
                union_table[index] += value;
            else
                union_table.insert(make_pair(index, value));
            count--;
            if (count == 0) break;
        }
        for (auto it = union_table.begin(); it != union_table.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
        //union_table.clear();//one
    }
    return 0;
}





