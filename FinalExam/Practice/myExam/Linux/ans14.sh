#!/bin/bash

rdfunc (){

    declare -i x=1
    while read line ; do
        if [ $1 == $x ] ; then 
            echo $line 
            break
        fi
        x=x+1
    done <$2
}


if [ "$(rdfunc $1 $3)" == "$(rdfunc $2 $3)" ] ; then 
    echo "YES"
else
    echo "NO"
fi
