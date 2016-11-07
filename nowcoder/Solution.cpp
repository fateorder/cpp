//
//  Solution.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <vector>
#include <deque>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> res;
        deque<int> s;
        for (unsigned i = 0; i < num.size(); ++i)
        {
            while (s.size() && num[s.back()] <= num[i])
                s.pop_back();
            while (s.size() && i - s.front() + 1 > size)
                s.pop_front();
            s.push_back(i);
            if(size && i + 1 >= size)
                res.push_back(num[s.front()]);
        }
        return res;
    }
};

int main()
{
    vector<int> coll1 = {2, 3, 4, 2, 6, 2, 5, 1};
    Solution solution;
    vector<int> coll2 = solution.maxInWindows(coll1, 3);
    copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
}
