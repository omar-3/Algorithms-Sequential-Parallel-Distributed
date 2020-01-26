#!/bin/bash
euclid () {
    echo "oki"
    while [ $b -ne 0 ]; do
        r=$((a%b))
        a=$b
        b=$r
    done
    gcd=$a
}
 
# euclid "108" "50"
# echo $gcd