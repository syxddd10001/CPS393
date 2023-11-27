#!/bin/bash

FILE="$2"
WORD="$1"
WC=0

for x in $(cat $FILE)
do
	echo "$x"
	
	if [[ "$x" =~ ^$WORD ]] ; 
	then
	((WC+=1))
	fi
done

echo "$WC"
