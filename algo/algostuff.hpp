//
//  algostuff.hpp
//  cpp
//
//  Created by Feast on 2016/11/6.
//  Copyright © 2016年 Feast. All rights reserved.
//

#ifndef algostuff_hpp
#define algostuff_hpp

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <functional>
#include <numeric>

template <class T>
inline void PRINT_ELEMENTS (const T& coll, const char* optcstr="")
{
    typename T::const_iterator pos;
    std::cout << optcstr;
    for (pos = coll.begin(); pos != coll.end(); ++pos)
    {
        std::cout << *pos << ' ';
    }
    std::cout << std::endl;
}

template <class T>
inline void INSERT_ELEMENTS (T& coll, int first, int last)
{
    for (int i = first; i <= last; ++i)
    {
        coll.insert(coll.end(), i);
    }
}







#endif /* algostuff_hpp */
