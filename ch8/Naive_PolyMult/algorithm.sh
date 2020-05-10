#!/bin/bash

#
# Associative arrays is really behaving weird
# and the loops skip some elements
#


naive_poly_mult () {
    M=()
    for i in ${!P[@]}; do
        for j in ${!Q[@]}; do
            if [ ${M[$(( $i + $j ))]+_} ]; then
                echo ${M[@]}
                M[$(( $i + $j ))]=$(( M[$(( $i + $j ))] + $(( ${P[i]} * ${Q[j]} )) ))
            else
                M+=([$(( $i * $j ))]=$(( ${P[i]} * ${Q[j]} )))
            fi
        done
    done

    for i in ${!M[@]}; do echo ${M[i]}; done
    echo "cool"
    for i in ${!M[@]}; do echo ${i}; done
}


P=([0]=5 [1]=2 [2]=3)
Q=([0]=4 [1]=1 [3]=1)

naive_poly_mult