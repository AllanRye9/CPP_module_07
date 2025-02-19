#pragma once

#include <iostream>
#include <cstdlib>

template <typename T>

class Array
{
private:
    T*      _array;
    size_t  _size;
    
public:
    Array()
    {
        _array = new T[0];
        _size = 0;
    }

    Array(unsigned int n)
    {
        _array = new T[n];
        _size = n;
    }

    ~Array()
    {
        delete [] _array;
    }

    Array(const Array& other)
    {
        _array = new T[other._size];
        _size = other._size;
        for (size_t i = 0; i < _size; i++)
        {
            _array[i] = other._array[i];
        }
    }

    Array& operator = (const Array& other)
    {
        if (this == &other)
            return *this;
        delete [] _array;
        _array = new T[other._size];
        _size = other._size;
        for (size_t i = 0; i < _size; i++)
        {
            _array[i] = other._array[i];
        }
        return *this;
    }

    T& operator[](unsigned int index)
    {
        if (index >= _size)
        {
            std::cerr << "Index out of bounds!!" << std::endl;
            throw std::exception();
        }
        return _array[index];
    }

    const T& operator[](unsigned int index) const
    {
        if (index >= _size)
        {
            std::cerr << "Index out of bounds!!" << std::endl;
            throw std::exception();
        }
        return _array[index];
    }
};