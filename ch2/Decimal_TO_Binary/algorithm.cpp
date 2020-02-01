#include <iostream>
#include <string>

void decimal_to_binary(int number, std::string binary = "") {
    if (number == 0) { std::cout << binary << std::endl; return;}       
    binary = number & 1? "1" + binary : "0" + binary;         // more concise way ```binary = std::to_string(number%2) + binary``` but i find the former more "understandable"
    decimal_to_binary(number/2,binary=binary);
}

int main() {
    decimal_to_binary(108);             // check the python implementation if you want the algorithm "returns" a value because
}                                       // if instead of cout binary I returned I got core dumped because you are missing with the stack ... check the python comments