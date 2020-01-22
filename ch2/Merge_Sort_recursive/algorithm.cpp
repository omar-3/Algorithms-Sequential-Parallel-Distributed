#include <vector>
#include <iostream>

template<class T>
void merge(std::vector<T>& L, int low, int mid, int high) {
    typedef typename std::vector<T>::iterator iterator;

    iterator first = L.begin()+low;
    iterator between = L.begin()+mid;
    iterator second = L.begin()+mid+1;
    iterator last = L.begin()+high;

    std::vector<T> temp;

    while ((first<=between) && (second<=last)) {
        if (*first<*second) {
            temp.push_back(*(first++));         // because we want to increase the pointer not the value pointed ad
        } else {
            temp.push_back(*(second++));
        }
    }
    if (first<=between) { temp.insert(temp.end(),first,between+1); }    // the intervals are half open ... wasted alot of time on that
    else { temp.insert(temp.end(),second,last+1); }

    for(int i = 0;i<temp.size();i++) {      // I guess ... this could be much cleaner
        L[low+i]=temp[i];
    }
}

template<class T>
void split(std::vector<T>& L, int low, int high) {
    if (low < high) {
        int mid = (low+high)/2;
        split(L,low,mid);
        split(L,mid+1,high);
        merge(L,low,mid,high);
    }
}


int main() {
    std::vector<int> list = {5,3,9,10,8,2,1,5,32,1,-23,-4,1,23,-2,-49,-80,1,-3,-5,-123,-1,23,213,-999,12,-1293};
    split(list,0,list.size()-1);
    for (int i = 0 ; i<list.size();i++){
        std::cout<<list[i]<<"  ";
    }
    std::cout<<std::endl;
}