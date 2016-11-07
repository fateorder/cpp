//
//  memfunla.cpp
//  cpp
//
//  Created by Feast on 2016/11/7.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <vector>

class Person
{
private:
    std::string name;
    
public:
    Person() : name()
    {
    }
    void print() const
    {
        std::cout << name << std::endl;
    }
    void PrintWithPrefix(std::string prefix) const
    {
        std::cout << prefix << name << std::endl;
    }
};

void foo(const std::vector<Person>& coll)
{
    using std::for_each;
    using std::bind2nd;
    using std::mem_fun_ref;
//    for_each(coll.begin(), coll.end(), mem_fun_ref(&Person::print()));
//    for_each(coll.begin(), coll.end(), mem_fun_ref(&Person::PrintWithPrefix("person: ")));
//    
    
}

