//
//  vector1.cpp
//  cpp
//
//  Created by Feast on 2016/11/4.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <vector>
#include <iostream>
using namespace std;

int main()
{
      vector<int> coll;
      
      for (int i = 0; i <= 6; ++i) {
            coll.push_back(i);
      }
      
      for (int i = 0; i < coll.size(); ++i) {
            cout << coll[i] << ' ';
      }
      
      cout << endl;
}
