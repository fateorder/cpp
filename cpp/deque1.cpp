//
//  deque.cpp
//  cpp
//
//  Created by Feast on 2016/11/4.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;

int main()
{
      deque<float> coll;
      
      for (int i = 0; i <= 6; ++i) {
//            coll.push_back(i * 1.1);
            coll.push_front(i * 1.1);
      }
      
      for (int i = 0; i < coll.size(); ++i) {
            cout << coll[i] << ' ';
      }
      cout << endl;
}
