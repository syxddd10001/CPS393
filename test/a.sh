#!/bin/bash

-declare -A arr
-declare -i x=0

while read line ; do

	arr[i]="$line"
	x=x+1
done

for n in $@; do
	
	echo "${arr[n]}"

done
