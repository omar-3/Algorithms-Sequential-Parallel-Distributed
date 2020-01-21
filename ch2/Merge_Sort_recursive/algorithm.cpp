#include <vector>
#include <iostream>

template<class T>
void split(std::vector<T>& L, int low, int high) {
    if (low < high) {
        int mid = (low+high)/2;
        split(L,low,mid);
        split(L,mid+1,high);
        merge(L,low,mid,high);
    }
}

template<class T>
void merge(std::vector<T>& L, int low, int mid, int high) {
    
}