//
//  Solution10.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * 计算你能获得的最大收益
     *
     * @param prices Prices[i]即第i天的股价
     * @return 整型
     */
    int calculateMax(vector<int> prices)
    {
        vector<int> v(prices.size(), 0);
        
        int min_prices = prices[0];
        int max_prices = prices[prices.size() - 1];
        int max_profit = 0;
        
        for (int i = 1; i < prices.size(); ++i)
        {
            v[i] = max_profit = max(max_profit, prices[i] - min_prices);
            min_prices = min(prices[i], min_prices);
        }
        
        max_profit = 0;
        
        for (int i = prices.size() - 2; i >= 0; --i)
        {
            max_profit = max(max_profit, max_prices - prices[i]);
            v[i] += max_profit;
            max_prices = max(max_prices, prices[i]);
        }
        
        int profit = v[0];
        
        for (int i = 1; i < prices.size() - 1; ++i)
        {
            profit = max(profit, v[i]);
        }
        
        return profit;
    }
};















