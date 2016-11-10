//
//  Solution4.cpp
//  cpp
//
//  Created by Feast on 2016/11/10.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string str;
    
    
    while(getline(cin,str))
        
    {   int a[26]={0};
        for(int i=0;i<str.length();++i)
        {
            a[str[i]-'a']++;
        }
        int min=a[str[0]-'a'];
        for(int i=0;i<str.length();++i)
        {
            if(a[str[i]-'a']<=min)
                min=a[str[i]-'a'];
        }
        for(int i=0;i<str.length();++i)
        {
            if(a[str[i]-'a']>min)
                cout<<str[i];
        }
        cout<<endl;
    }
    
    return 0;
}
