#!/bin/bash
shopt -s nocasematch
while read line ; do 
    for l in $line ; do 
        if [[ $l =~ ^$1 ]] ; then 
            echo $l
        fi
    done
done

shopt -u nocasematch
