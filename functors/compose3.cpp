//
//  compose3.cpp
//  cpp
//
//  Created by Feast on 2016/11/8.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <cctype>
#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include "compose22.hpp"
using namespace std;

int main()
{
    string s("Internationalization");
    string sub("Nation");
    
    string::iterator pos;
    pos = search(s.begin(), s.end(), sub.begin(), sub.end(),
                 compose_f_gx_hy(equal_to<int>(), ptr_fun(::toupper), ptr_fun(::toupper)));
    if (pos != s.end())
    {
        cout << "\"" << sub << "\" is part of \""
             << s << "\"" << endl;
    }

}
