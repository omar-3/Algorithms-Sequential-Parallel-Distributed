/*
    think of numbers as two metal rods and you try to find 
    the longest rod you can have which could be multipled by 
    a number and fit the two rod ... i can't write nor explain anything :(
*/

#include <iostream>
using namespace std;

typedef long long int number;

number naive_gcd(number a, number b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

