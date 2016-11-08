
//
//  Solution1.cpp
//  cpp
//
//  Created by Feast on 2016/11/8.
//  Copyright © 2016年 Feast. All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <set>
#include <string.h>
using namespace std;

struct info
{
    int rank;
    int count;
    info (int rank, int count)
    {
        this->rank = rank;
        this->count = count;
    }
};

struct fullinfo
{
    string file;
    int rank;
    int count;
    fullinfo(string file, int rank, int count)
    {
        this->file = file;
        this->rank = rank;
        this->count = count;
    }
};

struct classcomp
{
    bool operator() (const struct fullinfo& f1, const struct fullinfo& f2)
    {
        if (f1.count == f2.count) return f1.rank < f2.rank;
        return f1.count > f2.count;
    }
};

typedef info INFO;
typedef struct fullinfo FULLINFO;

int main()
{
    unordered_map<string, INFO> record;
    unordered_map<string, INFO>::iterator it;
    unordered_map<string, INFO>::const_iterator itfind;
    set<FULLINFO, classcomp> ret;
    set<FULLINFO, classcomp>::iterator sit;
    
    string linestr;
    string file;
    int pos;
    int i = 1;
    while (getline(cin, linestr))
    {
        if (linestr.length() == 0) break;
        pos = linestr.rfind("\\");
        file = linestr.substr(pos + 1);
        itfind = record.find(file);
        if (itfind == record.end())
        {
            INFO tmpi(i, 1);
            record.insert(pair<string, INFO>(file, tmpi));
        }
        else
        {
            INFO tmpi(itfind->second.rank, itfind->second.count + 1);
            record.erase(file);
            record.insert(pair<string, INFO>(file, tmpi));
        }
        i++;
    }
    
    for (it = record.begin(); it != record.end(); ++it)
    {
        FULLINFO tmpfull(it->first, it->second.rank, it->second.count);
        ret.insert(tmpfull);
    }
    
    for (i = 0, sit = ret.begin(); sit != ret.end() && i < 8; ++sit, ++i)
    {
        if (file.find(" ") <= 16)
            cout << (*sit).file << " " << (*sit).count << endl;
        else
            cout << (*sit).file.substr(file.find(" ") - 16) << " " << (*sit).count << endl;
    }
    
}
