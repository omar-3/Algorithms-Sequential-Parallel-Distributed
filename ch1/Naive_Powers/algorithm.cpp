/*
    The naive way to compute powers of numbers
    takes O(n) in computing x^n, very inefficient 
    in computing something like x^(10^83) it would take
    number of multiplications more than the number of
    atoms, but using algorithms like left-to-right or right-to-left
    exponentiation would take O(log2(n)) which is about 276
 
    the power n is assumed "forced" to be integer if you want to
    float powers you need to use Taylor series expansion
*/

#include <iostream>
using namespace std;

unsigned int naive_power(int x, int n) {
    int product = x;
    for (int i = 1 ; i < n ; i++) {
        product = product * x;
    }
    return product;
}
