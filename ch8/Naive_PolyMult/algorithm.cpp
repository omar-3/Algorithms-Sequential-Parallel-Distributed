#include <map>
#include <iterator>
#include <iostream>

//
// The functino takes two maps with key as the power of X
// and the corresponding value as the coefficient associated
// with X, and returns a same structure dictionary with the product
// of these two polynomials
//

std::map<int, int> naive_poly_mult(std::map<int, int> P, std::map<int, int> Q) {

    std::map<int, int> M = {};

    for (auto it = P.begin(); it != P.end(); it++) {
        for (auto it2 = Q.begin(); it2 != Q.end(); it2++) {

            int multPower = it->first  + it2->first;
            int multCoeff = it->second * it2->second;
            
            // If the power of X already exist in the product dictionary
            // it add the multCoeff to it, if not it initialize the key and 
            // value to zero, this is how c++ works
            
            M[multPower] += multCoeff;
        }
    }
    
    return M;
}



int main() {
    std::map<int, int> P = {
        {0 , -5},
        {1 , 2},
        {2 , 3}
    };

    std::map<int, int> Q = {
        {0 , 4},
        {1 , -1},
        {2 , 0},
        {3 , 1}
    };

    std::map<int, int> M = naive_poly_mult(P, Q);

    std::cout << "------" << std::endl;
    for (auto it = M.begin(); it != M.end(); it++) {
        std::cout << it->first << " " << it->second << std::endl;
    }
}
