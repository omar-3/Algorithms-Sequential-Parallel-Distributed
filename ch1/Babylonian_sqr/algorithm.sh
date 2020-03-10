#!/bin/bash
# unfortunately bash doesn't suppoer floating point operations
# so we are going to use linux calculator called "bc"


square () {
    a=$1
    local x=$a
    local error="0.0001"
    local difference=$(echo "scale=3;$x - $a/$x" | bc)
    local condition=$(echo "$difference > $error" | bc)
    while [ $condition -eq 1 ]; do
        x=$(echo "scale=3;($x + $a/$x)/2" | bc)
        difference=$(echo "scale=3;$x - $a/$x" | bc)
        condition=$(echo "$difference > $error" | bc)
    done
    echo $x
}

square "9"