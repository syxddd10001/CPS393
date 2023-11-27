#!/bin/bash
#this is like u3Lab03 except uses a here-string to
#assign line and filename to variables and then use
#them in appropriate echo

read MaxL MaxF <<< $( for i in * ; do
  if [ -f $i ] ; then
     wc -l $i
  fi
done | sort -n | tail -1
)
echo  "File $MaxF has the most lines (${MaxL})"
exit 0

