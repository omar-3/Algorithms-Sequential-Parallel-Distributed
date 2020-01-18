#!/bin/bash

recursion_pow () {
    if [ $2 -eq 1 ]
    then
        pow=$1
        echo $pow
    else
        if [ $(($2%2)) -eq 0 ]
        then
            pow=$(recursion_pow $(($1*$1)) $(($2/2)))
        else
            pow=$(($1*$(recursion_pow $(($1*$1)) $(( ($2-1)/2 )))))
        fi
    fi
    echo $pow
}

recursion_pow 20 2

# wierd output but I never said I'm good :"d