#!/bin/bash

shopt -s nocasematch

while read line ; do
    for x in $line ; do
        if [[ "$x" =~ ^$1 ]] ; then 
            echo $x
        fi 
    done
done

shopt -u nocasematch


