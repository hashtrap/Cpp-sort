#ifndef CPP_SORT_SORT_H
#define CPP_SORT_SORT_H

#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>
template<typename T>class Sort
{
public :
    std::ifstream file;

    Sort();
    Sort(std::string filepath);
    ~Sort();

    void BubbleSort(std::vector<T>& target,bool asc);
    void InsertionSort(std::vector<T>& target,bool asc);
    void MergeSort(std::vector<T>& target,bool asc);
    int BinarySearch(std::vector<T>,const T& target);



};


#endif //CPP_SORT_SORT_H
