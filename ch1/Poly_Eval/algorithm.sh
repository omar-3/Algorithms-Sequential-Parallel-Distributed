#!/bin/bash

# a = [1,2,0,3,0,4,5,0,3] ==> 1+2*x + 3*x^3 + 4*x^5 + 5*x^6 + 3*x^8

poly () {
    v=$1
    local sum=${a[0]}
    local product=1
    for (( i=1; i<${#a[@]}; i++ )); do
        product=$(( $product*$v ))
        sum=$(( $sum + $(( ${a[$i]}*$product )) ))
        echo $sum
    done
    echo $sum
}


a=(1 0 1 1 0 0 1 1)
poly "2"
