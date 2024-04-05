#include "Sort.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>

template <typename T>
Sort<T>::Sort()
{}

template <typename T>
Sort<T>::Sort(std::string filepath)
{
  file.open(filepath);
}

template <typename T>
Sort<T>::~Sort()
{
    file.close();
}

template <typename T>
std::vector<T> Sort<T>::BubbleSort(std::vector<T> target, bool asc)
{
    if(asc)
    {

    }
    else
    {

    }
}