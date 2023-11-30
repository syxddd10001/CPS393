#!/bin/bash

NUMFACT=0
for i
do 	
	for f in $(factor $i)
	do 
		((NUMFACT++))
	done	
	
	if [ $NUMFACT == 2 ] ; then
		echo "$i is PRIME"
	else
		echo "$i IS NOT PRIME"
	fi
	NUMFACT=0
done
exit 0
