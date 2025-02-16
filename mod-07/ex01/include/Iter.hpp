#pragma once

#include <iostream>
#include <cstring>

template <typename H>

void iter( H *array, size_t j, void (*f)(H &c) )
{
    for (size_t i = 0; i < j; i++)
        f(array[i]);
}