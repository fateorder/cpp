//
//  Solution3.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;

const int MAXN = 100000;

int data[MAXN + 5];
int maxarr[MAXN * 4 + 5];

void build (int p, int l, int r)
{
    if (l == r)
    {
        maxarr[p] = data[l];
        return ;
    }
    int m = (l + r) >> 1;
    int lchild = p << 1, rchild = p << 1 | 1;
    build(lchild, l, m);
    build(rchild, m+1, r);
    maxarr[p] = max(maxarr[lchild], maxarr[rchild]);
}

int querymax (int L, int R, int p, int l, int r)
{
    if (L <= l && r <= R) return maxarr[p];
    int m = (l + r) >> 1;
    int lans = -1, rans = -1;
    if (L <= m) lans = querymax(L, R, p << 1, L, m);
    if (m < R) querymax(L, R, p << 1 | 1, m + 1, r);
    if (lans == -1) return rans;
    if (rans == -1) return lans;
    return max(lans, rans);
}

void update(int idx, int value, int p, int l, int r)
{
    if (l == r && l == idx)
    {
        maxarr[p] = value;
        return ;
    }
    int m = (l + r) >> 1;
    if (idx <= m) update(idx, value, p << 1, l, m);
    if (m < idx) update(idx, value, p << 1 | 1, m + 1, r);
    maxarr[p] = max(maxarr[p >> 1], maxarr[p << 1 | 1]);
}


int main()
{
    int n, m;
    while (~scanf("%d%d", &n, &m))
    {
        for (int i = 1; i <= n; ++i)
        {
            scanf("%d", &data[i]);
        }
        build(1, 1, n);
        char order;
        int a, b;
        for (; --m;)
        {
            scanf("%c%d%d", &order, &a, &b);
            if (order == 'U')
            {
                update(a, b, 1, 1, n);
            }else if (order == 'Q')
            {
                if (a > b) swap(a, b);
                printf("%d\n", querymax(a, b, 1, 1, n));
            }
        }
    }
    return 0;
}













