#!/bin/bash

linear_search () {
    i=0
    while [ $i -lt ${#a[@]} ]
    do
        if [ ${a[$i]} -eq $2 ]
        then
            echo $i
            return
        fi
        i=$((i+1))
    done
    echo "-1"
}

a=("1" "4" "123" "123" "54" "3424")

linear_search a "54"

