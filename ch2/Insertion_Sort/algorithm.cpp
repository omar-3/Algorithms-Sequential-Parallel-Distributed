#include <vector>
#include <iostream>
#include <algorithm>

template<class T>
std::vector<T> insertion_sort(std::vector<T> List) {
    typedef typename std::vector<T>::iterator iterator;             // see this https://en.cppreference.com/w/cpp/language/dependent_name

    // I'm using iterators because you can sublist vectors with iterators not indecies
    for(iterator it = List.begin()+1 ; it<List.end() ; it++) {
        iterator firstElement = it-1;
        while (firstElement>=List.begin() && *firstElement > *it) {         // if the and in cpp is not short-circuited, would be trouble
            firstElement--;                                                 // because at the first Element iterator goes one step further than List.begin()
        }
        firstElement++;
        // we just do right rotation to the mis-sorted sub-vector
        iterator lastElement = it + 1;
        // thanks god there is rotate function in stl saving us from for loop but its complexity is still O(n)
        // but still we need to do all of stitching
        std::vector<T> tobeRotated(firstElement,lastElement);
        // let's rotate and then stitch vectors together
        std::rotate(tobeRotated.begin(),tobeRotated.begin()+(tobeRotated.size()-1),tobeRotated.end());
        // unfortunately C++ doesn't allow concatenating more than 2 vectors
        std::vector<T> left(List.begin(),firstElement);
        std::vector<T> middle(tobeRotated.begin(),tobeRotated.end());
        std::vector<T> right(lastElement,List.end());
        // things are not cool with c++ concatenating concatenating more than two vectors
        left.insert(left.end(),middle.begin(),middle.end());
        left.insert(left.end(),right.begin(),right.end());
        List = left;
    }
    return List;
}

// the normal implementation is much nicer in C++ thanks python but I'm seeing iterators better now


int main() {
    std::vector<int> List = {20,231,12,1,43,123,1412,-2134,123,1230,-1112,134,-1233,-112,115};
    std::vector<int> sortedList = insertion_sort(List);
    std::cout<< "This is the first list" << std::endl;
    for(int i = 0 ; i<sortedList.size(); i++) {
        std::cout<<sortedList[i]<<"  ";
    }
    std::cout<<std::endl;

    std::vector<int> List2 = {1,2,3,1,1,2,1,3,1,2,7,6,4};
    std::vector<int> sortedList2 = insertion_sort(List2);
    std::cout<< "This is a second list" << std::endl;
    for(int i = 0 ; i<sortedList2.size(); i++) {
        std::cout<<sortedList2[i]<<"  ";
    }
    std::cout<<std::endl;
}
