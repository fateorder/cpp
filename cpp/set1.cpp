//
//  set1.cpp
//  cpp
//
//  Created by Feast on 2016/11/4.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <set>
#include <iostream>


int main()
{
      typedef std::set<int> Intset;
      Intset coll;
      coll.insert(1);
      coll.insert(2);
      coll.insert(3);
      coll.insert(4);
      coll.insert(5);
      coll.insert(1);
      
      Intset::iterator pos;
      for (pos = coll.begin(); pos != coll.end(); ++pos) {
            std::cout << *pos << ' ';
      }
      std::cout << std::endl;
}
