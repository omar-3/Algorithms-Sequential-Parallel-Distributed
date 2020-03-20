#include <iostream>
#include <vector>
#include <algorithm>        //for std::max - std::min - std::swap



template<typename T>
void bingo_sort(std::vector<T>& L) {
    T minValue = *std::min_element(L.begin(), L.end());
    T maxValue = *std::max_element(L.begin(), L.end());
    T bingo = minValue;
    T next_bingo = maxValue;
    int nextIndex = 0;
    while (bingo < maxValue) {
        int startPosition = nextIndex;
        for(int i = startPosition; i < L.size(); i++) {
            if (L[i] == bingo) {
                std::swap(L[i], L[nextIndex++]);
            }
            if (L[i] < next_bingo) {
                next_bingo = L[i];
            }
        }
        bingo = next_bingo;
        next_bingo = maxValue;
    }
}

int main() {
    std::vector<int> numbers = {-1,1,4,2,5,3,2,1,1,2,2,2,4,5,5,5};
    bingo_sort(numbers);
    for (int x : numbers) {
        std::cout << x << std::endl;
    }
}