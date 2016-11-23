//
//  Solution04.cpp
//  cpp
//
//  Created by Feast on 2016/11/23.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <map>
#include <vector>
#include <queue>
using namespace std;

struct UndirectedGraphNode {
    int label;
    vector<struct UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {}
};


class Path {
public:
    bool checkPath(UndirectedGraphNode* a, UndirectedGraphNode* b) {
        // write code here
        return check(a, b) || check(b, a);
    }
    
    bool check(UndirectedGraphNode* a, UndirectedGraphNode* b)
    {
        if (a == NULL || b == NULL)
            return false;
        if (a == b)
            return true;
        map<UndirectedGraphNode*, bool> map1;
        queue<UndirectedGraphNode*> que;
        que.push(a);
        while (!que.empty())
        {
            UndirectedGraphNode* ptr = que.front();
            map1[ptr] = true;
            for (int i = 0; i<ptr->neighbors.size(); ++i)
            {
                if ((ptr->neighbors[i]) == b)
                    return true;
                if (ptr->neighbors[i] && map1[ptr->neighbors[i]] != true)
                    que.push((ptr->neighbors)[i]);
            }
            que.pop();
        }
        return false;
    }
};
