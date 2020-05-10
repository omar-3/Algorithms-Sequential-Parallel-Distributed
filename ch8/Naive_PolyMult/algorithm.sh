#!/bin/bash

#
# Associative arrays is really behaving weird
# and the loops skip some elements
#


naive_poly_mult () {
    M=()
    for i in ${!P[@]}; do
        for j in ${!Q[@]}; do
            if [ ${M[$(( ${P[i]} + ${Q[j]} ))]+_} ]; then
                M[$(( ${P[i]} + ${Q[j]} ))]=$(( M[$(( ${P[i]} + ${Q[j]} ))] + $(( $i * $j )) ))
            else
                M+=([$(( $i * $j ))]=$(( ${P[i]} + ${Q[j]} )))
            fi
        done
    done

    for i in ${!M[@]}; do echo ${M[i]}; done
    echo "cool"
    for i in ${!M[@]}; do echo ${i}; done
}


P=([5]=0 [2]=1 [3]=2)
Q=([4]=0 [1]=5 [1]=3)

naive_poly_mult