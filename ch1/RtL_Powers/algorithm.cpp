/*
    the algorithms divides the number into two numbers multiplied together
    first one is just the biggest power of 2 that could fit into the original number
    the other is the rest ... the first number is easy to compute, just square the number
    as many as there are bits in the bits of the powers ... second number is a bit tricky
    and could be computed by tracing the algorithm :"D I cannot formulate its idea with word
    but just trace the algorithm couple of time and it would be clear
*/

#include <iostream>
#include <cmath>
using namespace std;
typedef long long int number;

number rtl_power(number num, number power) {
    number accum = 1;
    number product = num;
    while (power>1) {
        if (power&1){
            accum *= product;
        }
        power = power >> 1;
        product *= product;
    }
    product *= accum;
    return product;
}

