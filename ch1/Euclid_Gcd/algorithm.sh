#!/bin/bash
euclid () {
    a=$1
    b=$2
    while [ $b -ne 0 ]; do
        r=$((a%b))
        a=$b
        b=$r
    done
    echo $a
}
 
euclid "108" "50"