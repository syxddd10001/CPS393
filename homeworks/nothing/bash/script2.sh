#!/bin/bash

FILE=""

for i
do
	FILE="$i"
	echo "Reading $FILE"	
	while read x 
	do 
		echo "$x"

	done < $FILE
	echo "--- DONE READING FILE $FILE---"
done

exit 0
