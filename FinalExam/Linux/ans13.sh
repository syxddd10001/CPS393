#!/bin/bash


shift $(($#-1))

if [[ "$1"  =~ ^[0-9] ]] ; then  
    echo "YES"
else 
    echo "NO"
fi
