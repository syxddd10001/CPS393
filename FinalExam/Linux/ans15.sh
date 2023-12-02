#!/bin/bash


monthAbr (){
    Month=(Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec)
    x=1 
    for m in "${Month[@]}" ; do
        if [ $x -eq $1 ] ; then 
            echo "$m"
            break
        fi
        ((x+=1))
    done
    
}


monthDay (){
    NumDays=(31 28 31 30 31 30 31 31 30 31 30 31)
    
    x=1 
    for n in "${NumDays[@]}" ; do
        if [ $x -eq $1 ] ; then 
            echo "$n"
            break
        fi
        ((x+=1))
    done
    
}
echo "$(monthAbr $1) has $(monthDay $1) days"
