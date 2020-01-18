#include <vector>
template <class T>
int binary_search(std::vector<T> L, T X) {
    int low = 0;
    int high = L.size() - 1;
    while (low <= high) {
        int mid = (low+high)/2;
        if (L[mid] == X) {
            return mid;
        } else if (L[mid] > X) {
            high = mid - 1;
        } else if (L[mid] < X) {
            low = mid + 1;
        }
    }
    return -1;
}
