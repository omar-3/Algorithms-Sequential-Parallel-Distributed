#!/bin/bash
# make it executable and run it
naive_power () {
    number=$1
    power=$2
    product=$number
    for (( i=1; i<$power;i++ )); do
        product=$(($product*$number));
    done
    echo $product
}

naive_power "5" "3"     