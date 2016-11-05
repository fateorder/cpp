//
//  mmap1.cpp
//  cpp
//
//  Created by Feast on 2016/11/4.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
      typedef multimap<int, string> IntStringMMap;
      IntStringMMap coll;
      
      coll.insert(make_pair(5, "tagged"));
      coll.insert(make_pair(2, "a"));
      coll.insert(make_pair(3, "of"));
      coll.insert(make_pair(4, "string"));
      coll.insert(make_pair(6, "is"));
      coll.insert(make_pair(1, "multimap"));
      coll.insert(make_pair(1, "this"));
      
      IntStringMMap::iterator pos;
      for (pos = coll.begin(); pos != coll.end(); ++pos) {
            cout << pos->second << ' ';
      }
      cout << endl;
      
}
