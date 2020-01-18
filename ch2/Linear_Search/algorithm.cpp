#include <vector>
template<class T>
int linear_search(std::vector<T> L, T X) {
    for (int i = 0; i < L.size(); i++) {
        if (L[i] == X){
            return i;
        }
    }
    return -1;
}

