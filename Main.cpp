#include<iostream>
#include<fstream>
#include<vector>
#include"Sort.h"
#include"Sort.cpp"

using namespace std;

int main()
{
    vector<int> number;


    for(int i=0;i<10;i++)
    {
        number.push_back(i);
        cout<<number[i]<<endl;
    }
    cout<<endl;

    Sort<int> sort;

    sort.MergeSort(number,number.size());

    for(int i=0;i<number.size();i++)
    {
        cout<<number[i]<<endl;
    }
     sort.BinarySearch(number,5);
    return 0;
}