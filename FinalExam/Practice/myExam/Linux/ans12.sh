#!/bin/bash

if [ 1 == $# ] ; then
    echo $(cat $1) | xargs 
else 
    echo $(cat $1) | xargs -n$2
fi
