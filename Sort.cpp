#include "Sort.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<cmath>

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
void Sort<T>::BubbleSort(std::vector<T>& target, bool asc)
{
    if(asc)
    {
        for (int i = 0; i < target.size() - 1; i++) {

            for (int j = 0; j < target.size() - i - 1; j++) {
                if (target[j] > target[j + 1]) {

                    std::swap(target[j], target[j + 1]);
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < target.size() - 1; i++) {

            for (int j = 0; j < target.size() - i - 1; j++) {
                if (target[j] < target[j + 1]) {

                    std::swap(target[j+1], target[j]);
                }
            }
        }
    }
}

template<typename T>

void Sort<T>::InsertionSort(std::vector<T>& target, bool asc)
{
    if(asc) {
        int i, j;
        T key;
        for (i = 1; i < target.size(); i++) {
            key = target[i];
            j = i - 1;


            while (j >= 0 && target[j] > key) {
                target[j + 1] = target[j];
                j = j - 1;
            }
            target[j + 1] = key;
        }
    }
    else
    {
        int i, j;
        T key;
        for (i = 1; i < target.size(); i++) {
            key = target[i];
            j = i - 1;


            while (j >= 0 && target[j] < key) {
                target[j + 1] = target[j];
                j = j - 1;
            }
            target[j + 1] = key;
        }
    }
}
template<typename T>
void Sort<T>::MergeSort(std::vector<T>& target, bool asc ) {
    if (target.size() <= 1) {
        return;
    }

    int mid = target.size() / 2;
    std::vector<T> left(target.begin(), target.begin() + mid);
    std::vector<T> right(target.begin() + mid, target.end());

    MergeSort(left, asc);
    MergeSort(right, asc);

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < left.size() && j < right.size()) {
        if (asc) {
            if (left[i] > right[j]) {
                target[k++] = left[i++];
            } else {
                target[k++] = right[j++];
            }
        } else {
            if (left[i] < right[j]) {
                target[k++] = left[i++];
            } else {
                target[k++] = right[j++];
            }
        }
    }

    while (i < left.size()) {
        target[k++] = left[i++];
    }

    while (j < right.size()) {
        target[k++] = right[j++];
    }
}