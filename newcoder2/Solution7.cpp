//
//  Solution7.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

bool vis[126];

int main()
{
    char str[110];
    while (gets(str))
    {
        memset(vis, 0, sizeof(vis));
        for (int i = 0; str[i]; ++i)
        {
            if (vis[str[i]])
                continue;
            putchar(str[i]);
            vis[str[i]] = true;
        }
        puts("");
    }
}
