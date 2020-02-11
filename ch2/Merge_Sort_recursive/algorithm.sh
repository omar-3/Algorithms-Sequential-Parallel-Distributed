#!/bin/bash

merge() {
    local first=$2
    local second=$(( $3+1 ))
    local temp=()
    while [[ first -le $3 ]] && [[ second -le $4 ]]
    do
        
        if [[ a[first] -lt a[second] ]]
        then
            temp+=$(( a[first] ))
            first=$(( first+1 ))
        else
            temp+=$(( a[second] ))
            second=$(( second+1 ))
        fi
    done

    while [[ first -le $3 ]]
	   
    do
        temp+=$(( a[first] ))
        first=$(( first+1 ))
    done

    while [[ second -le $4 ]]
    do
        temp+=$(( a[second] ))
        second=$(( second+1 ))
    done

    local k=$2
    while [[ k -le $4 ]]
    do
        a[k]=$(( temp[k] ))
        k=$(( k+1 ))
    done 
}


split() {
    if [ $2 -lt $3 ]
    then
        mid=$(( ($2+$3)/2 ))
        split a "$2" "$mid"
        split a "$(( mid+1 ))" "$3"
        merge a "$2" "$mid" "$3"
    fi
}




a=("1" "234" "5" "4" "2" "10")

split a "0" "$((${#a[@]}-1))"   # thanks to parameter exapnsion

