//
//  list2.cpp
//  cpp
//
//  Created by Feast on 2016/11/4.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <list>
#include <iostream>
using namespace std;

int main()
{
      list<char> coll;
      for (char c = 'a'; c <= 'z'; ++c) {
            coll.push_back(c);
      }
      //读写迭代器
      list<char>::iterator pos1;
      for (pos1 = coll.begin(); pos1 != coll.end(); ++pos1) {
            cout << *pos1 << ' ';
            *pos1 = toupper(*pos1);
      }
      cout << endl;
      //只读迭代器
      list<char>::const_iterator pos;
      for (pos = coll.begin(); pos != coll.end(); ++pos) {
            cout << *pos << ' ';
      }
      cout << endl;
      
      
}
