//
//  fopow.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <functional>
#include <cmath>

template <class T1, class T2>
struct fopow : public std::binary_function<T1, T2, T1>
{
    T1 operator() (T1 base, T2 exp) const
    {
        return std::pow(base, exp);
    }
};

