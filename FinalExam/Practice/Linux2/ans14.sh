#!/bin/bash

print_line(){
    declare -i x=1
    while read line ; do
        if [[ $x -eq $1 ]] ; then
            echo $line
            break
        fi
        x=x+1
    done < $2
}

if [ "$(print_line $1 $3)" == "$(print_line $2 $3)" ] ; then
    echo "YES"
else 
    echo "NO"
fi
