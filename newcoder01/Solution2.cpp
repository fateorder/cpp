//
//  Solution2.cpp
//  cpp
//
//  Created by Feast on 2016/11/8.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

class Gray
{
public:
    vector<string> getGray(int n )
    {
        vector<string> gray;
        if (n == 1)
        {
            gray.push_back("0");
            gray.push_back("1");
            return gray;
        }
        vector<string> last_gray = getGray(n - 1);
        for (int i = 0; i < last_gray.size(); ++i)
            gray.push_back("0" + last_gray[i]);
        for (int i = last_gray.size() - 1; i >= 0; --i)
            gray.push_back("1" + last_gray[i]);
        return gray;
    }
};




class GrayCode
{
public:
    string getbinarystr(int num, int n)
    {
        string binarystr = "";
        while (num)
        {
            int remain = num % 2;
            stringstream ss;
            ss << remain;
            string remainstr;
            ss >> remainstr;
            binarystr = remainstr + binarystr;
            num = num / 2;
            n--;
        }
        while (n--)
        
            binarystr = "0" + binarystr;
        return binarystr;
    }
    
    vector<string> getGray(int n)
    {
        int pown = pow(2, n);
        vector<string> gray;
        for (int i = 0; i < pown; ++i)
        {
            int graynum = i ^ (i / 2);
            string graystr = getbinarystr(graynum, n);
            gray.push_back(graystr);
        }
        return gray;
    }
};


