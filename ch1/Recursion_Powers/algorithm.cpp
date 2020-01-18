/*
    but I guess the recursion overhead
    would slow things down 
*/
#include <iostream>
typedef long long int number;

number recursion_pow(number x, number n) {
    number power;
    if (n==1) {
        power = x;
        return power;
    } else {
        if (!(n&1)) {
            power = recursion_pow(x*x,n/2);
        } else {
            power = x*recursion_pow(x*x,(n-1)/2);
        }
    }
    return power;
}
