//
//  hex.cpp
//  cpp
//
//  Created by Feast on 2016/11/5.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        map<char,int> letterToNum;
        letterToNum['A']=10;
        letterToNum['B']=11;
        letterToNum['C']=12;
        letterToNum['D']=13;
        letterToNum['E']=14;
        letterToNum['F']=15;
        
        int len=str.size();
        long long sum=0;
        
        for(int i=2;i<len;i++)
        {
            if(str[i]>='A'&&str[i]<='F')
                sum = sum*16 +letterToNum[str[i]];
            else
                sum = sum*16 + (str[i]-'0');
        }
        cout<<sum<<endl;
    }
    return 0;
}
