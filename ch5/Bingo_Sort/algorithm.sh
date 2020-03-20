#!/bin/bash

bingo_sort() {
    max=${a[0]}
    min=${a[0]}
    for i in "${a[@]}"; do            # https://stackoverflow.com/questions/40642558/finding-max-and-minimum-values-from-a-bash-array
        (( i > max )) && max=$i        
        (( i < min )) && min=$i
    done
    bingo=$min
    next_bingo=$max
    nextIndex=0
    while [[ $bingo -lt $max ]]; do
        startPosition=$nextIndex
        for (( i=startPosition; i < ${#a[@]}; i++ )); do
            if [[ ${a[$i]} -eq $bingo ]]; then
                temp=${a[$i]}
                a[$((i))]=${a[$nextIndex]}
                a[$((nextIndex))]=$temp
                nextIndex=$((nextIndex+1))
            fi
            if [[ ${a[$i]} -lt $next_bingo ]]; then
                next_bingo=${a[$i]}
            fi
        done
        bingo=$next_bingo
        next_bingo=$max
    done
    echo ${a[@]}
}

a=(1 1 1 2 3 4 2 3 1 1 1 5 6 3 2 -1 -9 8 8 8 8 9 9 3 4 4 4 5 5 6 6 6)
bingo_sort