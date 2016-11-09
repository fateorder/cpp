//
//  stack1.cpp
//  cpp
//
//  Created by Feast on 2016/11/9.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << ' ';
    st.pop();
    cout << st.top() << ' ';
    st.pop();
    st.top() = 77;
    st.push(4);
    st.push(5);
    cout << endl;
    while (!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
}
