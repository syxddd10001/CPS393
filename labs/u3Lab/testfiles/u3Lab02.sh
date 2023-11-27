#!/bin/bash


FILE="$1"



while read NUM; do
       	
	if ! [[ $NUM =~ \. ]] ; then
		echo "${NUM}"	
	else	
		echo "${NUM}" | sed -e "s/\./ + 0./" | sed -e "s/$/ \= $NUM/"

	fi
done <$FILE





exit 0
