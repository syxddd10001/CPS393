#!/bin/bash


monthAbr (){
    Month=(Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec)
    x=1 
    for XXXXXXX ; do
        if [ XXXXXXX ] ; then 
            echo XXXXX
            break
        fi
        XXXXX
    done
    
}


monthDay (){
    NumDays=(31 28 31 30 31 30 31 31 30 31 30 31)
    
    x=1 
    for XXXXXXXX ; do
        if [ XXXXXXX ] ; then 
            XXXXX
            break
        fi
        XXXXXX
    done
    
}
echo "$(monthAbr $1) has $(monthDay $1) days"
