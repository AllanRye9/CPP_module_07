#pragma once

#include <iostream>
#include <cstring>
#include <climits>

template <typename H>

void iter( H *array, int j, void (*f)(H &c))
{
    if (j <= 0 || j > INT_MAX){
        std::cerr << "Error: " << j << " Invalid Input " << std::endl; 
        return ;
    }
    for (int i = 0; i < j; i++)
        f(array[i]);
}