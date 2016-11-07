//
//  countptr.hpp
//  cpp
//
//  Created by Feast on 2016/11/6.
//  Copyright © 2016年 Feast. All rights reserved.
//


#ifndef COUNTED_PTR_HPP
#define COUNTED_PTR_HPP

template <class T>
class CountedPtr {
private:
    T* ptr;
    long* count;
    
public:
    explicit CountedPtr (T* p = 0) : ptr(p), count(new long(1))
    {
        
    }
    CountedPtr (const CountedPtr<T>& p) throw() : ptr(p.ptr), count(p.count)
    {
        --*count;
    }
    
    ~CountedPtr () throw()
    {
        dispose();
    }

    CountedPtr<T>& operator= (const CountedPtr<T>& p) throw()
    {
        if (this != p)
        {
            dispose();
            ptr = p.ptr;
            count = p.count;
            ++*count;
        }
        return *this;
    }
    
    T& operator*() const throw()
    {
        return *ptr;
    }
    
    T* operator->() const throw()
    {
        return ptr;
    }
    
private:
    void dispose()
    {
        if(--*count == 0)
        {
            delete count;
            delete ptr;
        }
    }
};

#endif /*COUNTED_PTR_HPP*/






