#!/bin/bash


awk 'NR==1{print} 
NR>1 {C=$1} ; 
NR>1 && $2=="F" { C=(C-32)/1.8 } ; 
NR>1 { printf("%0.1f\tC\n", C) }' $1
