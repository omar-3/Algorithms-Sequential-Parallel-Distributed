#!/bin/bash

#
#   you can brace expansion trick to generate all the possible binary 
#   expansion for a certain length and save them all in an array and get the element
#   with its index ...
#   I will generate all binary combinations of 5 bits and save them into array
#   
#   binaryDec=({0..1}{0..1}{0..1}{0..1}{0..1})
#   #to get number 5 ... remember that arrays in bash is zero indexed
#   NumberFive=${binaryDec[5]}  ===> the sixth element in the array, because we have zero
#
#
#   I will do it with something with bc [https://www.gnu.org/software/bc/]; linux calculator
#

binarize () {
    number=$1
    echo $(echo "obase=2;$number" | bc)
}

ltr_power() {
    pow=$(binarize $2)
    product=1
    for (( i=0; i<${#pow}; i++ )); do
        if [ ${pow:$i:1} -eq 1 ]
        then
            product=$(($1*$product*$product))
        else
            product=$(($product*$product))
        fi
    done
    echo $product
}

ltr_power "5" "5"