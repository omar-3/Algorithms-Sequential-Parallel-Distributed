/*
    sqrt(a) * sqrt(a) = a
    so sqrt(a) is the side of square with area a
    and we keep two numbers as the side of a polygon with area a
    and make them get closer together by averaging <3
*/

#include <iostream>
using namespace std;

typedef long double number;                     //you need to use double so the while condition would work 

number square(number a, double error=0.0001) {
    number x = a;
    while (abs(x - a/x) > error) {
        x = (x+(a/x))/2;
    }
    return x;
}
