#!/bin/bash
insertion_sort() {
    for (( i=1; i<${#a[@]}; i++ )); do
        local firstElement=$((i-1))
        local toBeRotated=${a[$i]}
        while  [[ $firstElement -ge 0 &&  ${a[$firstElement]} -gt ${a[$i]} ]]
        do
            a[$(($firstElement+1))]=${a[$firstElement]}
            firstElement=$(($firstElement - 1))
        done
        firstElement=$(($firstElement + 1))
        a[$firstElement]=$toBeRotated
        echo ${a[@]}
    done
    echo ${a[@]}
}


a=(5 4 3 2 1)
insertion_sort 