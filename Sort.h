#ifndef CPP_SORT_SORT_H
#define CPP_SORT_SORT_H

#include<iostream>
#include<fstream>
#include<vector>
template<typename T>class Sort
{
public :
    std::ifstream file;

    Sort();
    Sort(std::string filepath);
    ~Sort();

    std::vector<T> BubbleSort(std::vector<T> target,bool asc);
    std::vector<T> InsertionSort(std::vector<T> target,bool asc);
    std::vector<T> MergeSort(std::vector<T> target,bool asc);
    T BinarySearch(std::vector<T>,T target);

};


#endif //CPP_SORT_SORT_H
