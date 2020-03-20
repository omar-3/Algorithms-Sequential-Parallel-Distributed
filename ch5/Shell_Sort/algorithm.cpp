#include <iostream>
#include <vector>

template<typename T>
void InsertionSubSort(std::vector<T>& L, int k) {
    for (int i = k ; i < L.size ; i++) {
        T current = L[i];
        int position = i - k;
        while ((position >= 0) && (current < L[position])) {
            L[position + k] = L[position];
            position = position - k;
        }
        L[position + k] = current;
    }
}

template<typename T>
void ShellSort(std::vector<T>& L , std::vector<int> k) {
    for (int i = 0 ; i < k.size() ; i++) {
        InsertionSubSort(L, k[i]);
    }
}

int main () {
    std::vector<int> omar = {4,3,2,0,12,10,2,9,8,-1,-2,3,6,58,8,34,54,62,61,54,50};
    std::vector<int> k = {6,5,4,3,2,1};
    ShellSort(omar, k);
    for(int i = 0 ; i < omar.size() ; i++) {
        std::cout << omar[i] << std::endl;
    }
}