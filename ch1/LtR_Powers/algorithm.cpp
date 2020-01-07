/*
    This is one of the two "smart" ideas to implement
    power function: right to left, and left to right exponentiation.
    The algorithm began scanning the binary representation of the power
    from left to right and if it sees one multiply X by itself squared
    if it sees zero, it just square X ... it is exactly like building 
    the binary number from ground up and accordingly, it compute the number

    It has complexity between log(n) to 2log(n) ===> see chat section to see the proof
    but roughy speaking if your binary representation is just ones so you basically just
    squaring (one multiplication) each iteration, if your binary representation is all zeros
    you do the squaring (one multiplication) and also other multiplication of x (one multiplication)
*/

#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;
typedef long long int number;


number ltr_power(number num, number power) {
    number product = 1;
    string binary = bitset<64>(power).to_string();
    string::iterator it = binary.begin();
    while(*it == '0') it++;                                             // we need the MSB of our number and skipp all the padded zeros
    for(; it != binary.end(); it++) {
        product = *it == '1'? num*(pow(product,2)):pow(product,2);
    }
    return product;
}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// I'm going to use std function instead of implementing function converting to binary, I want to get used to c++ libraries //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////