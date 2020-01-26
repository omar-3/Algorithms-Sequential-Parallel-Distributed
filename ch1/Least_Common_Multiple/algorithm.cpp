#include <iostream>
#include <numeric>

typedef unsigned long long Number;

Number least_common_multiple(Number a, Number b){
    return (a*b)/std::gcd(a,b);
}

int main() {
    std::cout << least_common_multiple(12,15) << std::endl;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              you need to specify c++17 while making the object file because the std::gcd is only in c++17
//                                                                                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////