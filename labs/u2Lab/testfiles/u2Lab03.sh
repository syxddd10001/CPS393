#!/bin/bash

FILE1="$1"
FILE2="$2"
N=$3


head -n $N $FILE1 >F1
tail -n $N $FILE2 >F2


echo -n "First $N lines of $FILE1 and last $N lines of $FILE2"
echo " $( diff -qs F1 F2 | cut -d ' ' -f 5-6 )"

rm F1
rm F2

exit 0
