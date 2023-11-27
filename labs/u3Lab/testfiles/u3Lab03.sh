#!/bin/bash

RESULT=$(for i in * ; do
	if [ -f $i ] ; then
       		wc -l $i
     	fi

done | sort -n | tail -1 | cut -d " " -f 1-2)

COLUMN1=$(echo "$RESULT" | cut -d " " -f 1)

COLUMN2=$(echo "$RESULT" | cut -d " " -f 2)

echo "File $COLUMN2 has the most lines ($COLUMN1)"

exit 0
