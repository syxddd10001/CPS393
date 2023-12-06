#!/bin/bash

lower=$(echo $1 | tr "[A-Z]" "[a-z]")
while read line ; do
    for x in $line ; do
        found=$(echo $x | tr "[A-Z]" "[a-z]" | grep "$lower")
        if [ $found ] ; then 
            echo $x
        fi 
    done
done



