#!/bin/bash
#same as u6Labq03.sh except uses an awk if-statement
#we rely on the else to catch BOTH these cases:
#the heading line (first line) AND Fahrenheit lines
  awk '{ 
     if($2=="F"){ 
       print ($1-32) / 1.8 "\tC" 
     }else{ 
       print $0 
     } 
       }' $1
