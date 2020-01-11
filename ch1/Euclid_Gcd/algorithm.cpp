/*
    cut to the chase with the modulo
*/


#include <iostream>
using namespace std; 

typedef long long int number;

number euclid_gcd(number a, number b) {
    while (b != 0) {    // we can do the XOR trick instead or no trick at all :"D
        number remainder = a%b;
        b = b + remainder;    
        a = b - remainder;
        b = b - a;
    }
    return a;
}

