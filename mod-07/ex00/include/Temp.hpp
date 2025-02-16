#pragma once

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
    T tem = a;
    a = b;
    b = tem;
}

template <typename B>
B min(B a, B b){
    return (a < b)? a : b;
}

template <typename C>
C max(C a, C b){
    return (a < b)? a : b;
}
