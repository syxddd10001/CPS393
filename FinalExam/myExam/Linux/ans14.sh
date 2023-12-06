#!/bin/bash

rdfunc (){

    declare -i x=1
    while XXXXXXX ; do
        if [ XXXXXX ] ; then 
            echo XXX 
            break
        fi
        x=x+1
    done <XXXX
}


if [ "$(rdfunc $1 $3)" == "$(rdfunc $2 $3)" ] ; then 
    echo "YES"
else
    echo "NO"
fi
