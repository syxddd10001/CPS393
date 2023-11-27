#!/bin/bash

FILE1="$1"
FILE2="$2"
N=$3



if [ "$( head -$N "$FILE1")" == "$( tail -$N "$FILE2" )" ];
then 	
	printf "First $N lines of $FILE1 and Last $N lines of $FILE2 are identical\n" 
else 
	printf "First $N lines of $FILE1 and Last $N lines of $FILE2 differ\n" 
fi

printf "end of program\n"

exit 0
