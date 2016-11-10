//
//  Solution1.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstddef>
using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        pair<int, int> point(0,0);
        size_t found = str.find_first_of(';');
        int start = 0;
        
        while (found != string::npos)
        {
            string s1 = str.substr(start, found= start);
            start = found + 1;
            
            if (s1.size() > 1 && s1.size() < 3)
            {
                char c = s1[0];
                int n = 0;
                int invalid = 0;
                for (int i = 1; i < s1.size(); ++i)
                {
                    if (s1[i] >= '0' && s1[i] <= '9')
                    {
                        n = n * 10 + (s1[i] - '0');
                    }
                    else
                    {
                        invalid = 1;
                        break;
                    }
                }
                if (invalid == 0)
                {
                    switch (c) {
                        case 'A':
                        {point.first -= n; break;}
                        case 'D':
                        {point.first += n; break;}
                        case 'W':
                        {point.second += n; break;}
                        case 'S':
                        {point.second -= n; break;}
                        default:
                            break;
                    }
                }
            }
        }
        cout << point.first << ',' << point.second << endl;
    }
    return 0;
    
}
