#include <vector>
template<class T>
int interpolation_search(std::vector<T> L, T X) {
    int low = 0;
    int high = L.size();
    while (low <= high) {
        int i = ((((X-L[low])*(high-low))/(L[high]-L[low]))+low)
        if (X == L[i]){
            return i;
        } else if (X < L[i]) {
            high = i - 1;
        } else if (X > L[i]) {
            low = i + 1;
        }
    }
    return -1;
}