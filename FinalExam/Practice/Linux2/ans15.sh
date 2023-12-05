#!/bin/bash

monthNum(){
    declare -i x=1
    Month=(Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec)
    for m in ${Month[@]} ; do
        if [[ $x -eq $1 ]] ; then
            echo $m
            break
        fi
        x=x+1
    done
}


dayNum(){
    declare -i y=1
    NumDays=(31 28 31 30 31 30 31 31 30 31 30 31)
    for n in ${NumDays[@]} ; do
        if [[ $y -eq $1 ]] ; then
            echo $n
            break
        fi
        y=y+1
    done
}



echo "$(monthNum $1) has $(dayNum $1) days"
