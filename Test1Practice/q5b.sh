#!/bin/bash

NUMFACT=0
for i
do 	
	((NUMFACT=$(factor $i | wc -w))) 
	((NUMFACT=$NUMFACT-1))
	echo "$i: $NUMFACT prime factors"
done
exit 0
