//
//  Solution03.cpp
//  cpp
//
//  Created by Feast on 2016/11/23.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <stack>
#include <vector>
using namespace std;


class TwoStacks {
public:
    vector<int> twoStacksSort(vector<int> numbers) {
        // write code here
        stack<int> a;
        stack<int> b;
        int siz = numbers.size();
        for (int i = 0; i < siz; ++i)
        {
            a.push(numbers[i]);
        }
        for (int i = 0; i < siz; ++i)
        {
            int min = a.top();
            int count = 0;
            for (int j = i; j < siz; ++j)
            {
                if (a.top() < min)
                {
                    min = a.top();
                }
                b.push(a.top());
                a.pop();
            }
            a.push(min);
            for (int j = i; j < siz; ++j)
            {
                if (count == 0 && b.top() == min)
                {
                    b.pop();
                    count++;
                    continue;
                }
                a.push(b.top());
                b.pop();
            }
        }
        for (int i = 0; i < siz; ++i)
        {
            numbers[i] = a.top();
            a.pop();
        }
        return numbers;
    }
};
