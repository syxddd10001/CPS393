#!/bin/bash


FILENAME=""
LONGEST_WC=0

if test $# = 0 ; then
	echo "no arguments were passed"
	exit 0
fi


for i
do
	
	CURRENT=$(cat $i | wc -w)
	if test $CURRENT > $LONGEST_WC ;
	then
		FILENAME=$i
		LONGEST_WC=$CURRENT
	fi
done
echo "$FILENAME: $LONGEST_WC"

exit 0
