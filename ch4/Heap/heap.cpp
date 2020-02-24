
#pragma once

#include <vector>
#include <iostream>

template <class T>
class heap {
    private:
        std::vector<T> List;
        int size;
    public:
        heap():List({}),size(0) {}
        void insert(const T&& value) {
            this->List.push_back(value);
            int i = this->size;
            int j = (i - 1)/2;
            while ((j >= 0) && (this->List[j] < value)) {
                std::cout << this->List[i] << std::endl;
                this->List[i] = this->List[j];
                i = j;
                j = (j-1)/2;
            }
            this->List[i] = value;
            this->size++;
        }
        void adjust(int i) {
            T temp = this->List[i];
            bool found = false;
            int j = 2*i + 1;
            while ((j < this->size) && !(found)) {
                if ((j < this->size -1) && (this->List[j] < this->List[j+1])) {
                    j = j + 1;
                }
                if (temp >= this->List[j]) {
                    found = true;
                } else {
                    this->List[(j-1)/2] = this->List[j];
                    j = 2*j + 1;
                }
            }
            this->List[(j-1)/2] = temp;
        }

        void remove() {
            T x = this->List[0];
            this->size--;
            this->List[0] = this->List[this->size];
            adjust(0)
        }
        void print() {
            for (int i = 0 ; i < this->List.size() ; i++) {
                std::cout << this->List[i] << std::endl;
            }
        }
};


