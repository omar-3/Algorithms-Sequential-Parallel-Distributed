#!/bin/bash
insertion_sort() {
    for (( i=1; i<${#a[@]}; i++ )); do
        local position=$(( i-1 ))
        local toBeRotated=${a[$i]}
        while  [[ $position -ge 0 &&  ${a[$position]} -gt $toBeRotated ]]
        do
            a[$(( position+1 ))]=${a[$position]}
            position=$(( position - 1 ))
        done
        position=$(( position + 1 ))
        a[$position]=$toBeRotated
        echo ${a[@]}
    done
    echo ${a[@]}
}


a=(5 4 3 2 10 15 19 10 8 4 21 39 82 71 31 1 -2 -1 -5 0 1)
insertion_sort | nl