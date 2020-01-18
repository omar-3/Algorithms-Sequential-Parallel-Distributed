#!/bin/bash
binary_search () {
    low=0
    high=$((${#a[@]}-1))
    while [ $low -le $high ]
    do
        mid=$(((low+high)/2))
        if [ ${a[mid]} -eq $2 ]
        then
            echo $mid
            return
        elif [ $2 -gt ${a[mid]} ]
        then
            low=$(($mid+1))
        elif [ $2 -lt ${a[mid]} ]
        then
            high=$(($mid-1))
        fi
    done
    echo "-1"
}

a=(1 2 3 4 5 6 7 8 9)
binary_search a "8"