#!/bin/bash

if [[ $# = 2 ]] ; then
    cat $1 | xargs -n$2

else
    cat $1 | xargs 
fi
