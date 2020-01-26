#!/bin/bash



least_common_multiple () {
    a=$1
    b=$2
    source gcd.sh
    echo $(( ($a*$b)/($gcd) ))
}

least_common_multiple "12" "15"