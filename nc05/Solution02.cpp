//
//  Solution02.cpp
//  cpp
//
//  Created by Feast on 2016/11/23.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <vector>
#include <iostream>
using namespace std;

class SetOfStacks
{
public:
    vector<vector<int> > setOfStacks(vector<vector<int> > ope, int size)
    {
        // write code here
        // 二维数组，每一行是一个栈，栈高即为列数(size)
        // push 最后一行满就增加一行并入栈
        // pop 最后一行若空则pop掉最后一行再出一个
        vector<vector<int> > ret;
        vector<int> temp;
        
        for (int i = 0; i < ope.size(); ++i)
        {
            if (ope[i][0] == 1)
            {
                if (ret.empty() || ret.back().size() == size)
                {
                    temp.clear();
                    temp.push_back(ope[i][1]);
                    ret.push_back(temp);
                }
                else
                {
                    ret.back().push_back(ope[i][1]);
                }
            }
            else if (ope[i][0] == 2)
            {
                if (ret.back().empty())
                {
                    ret.pop_back();
                    ret.back().pop_back();
                }
                else
                {
                    ret.back().pop_back();
                }
            }
        }
        return ret;
    }
};
