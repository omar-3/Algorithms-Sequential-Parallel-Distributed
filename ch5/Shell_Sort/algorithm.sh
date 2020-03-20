#!/bin/bash
InsertionSubSort() {
    local h=$1
    # echo $h
    for (( i=h; i<${#a[@]}; i++ )); do
        local current=${a[$i]}
        local position=$(( i - h ))
        while [[ $position -ge 0 && ${a[$position]} -gt $current ]]
        do
            a[$(( position + h ))]=${a[$position]}
            position=$(( position - h ))
        done
        a[$(( position + h))]=$current
    done
}

ShellSort() {
    for (( n=0; n< 6; n++ )); do
        InsertionSubSort ${k[$n]}
    done
    echo ${a[@]}
}

a=(5 4 3 2 1 10 13 19 0 0 4 21 43 71 32 1 -9)
k=(6 5 4 3 2 1)

ShellSort | nl