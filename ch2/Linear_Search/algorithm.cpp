#include <vector>
#include <iostream>

template<class T>
int linear_search(std::vector<T> L, T X) {
    for (int i = 0; i < L.size(); i++) {
        if (L[i] == X){
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> list = {53,123,32,123,5,8,19,9012,31};
    std::cout<<linear_search(list, 123);
}