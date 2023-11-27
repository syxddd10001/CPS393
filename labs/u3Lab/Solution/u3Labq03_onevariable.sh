#!/bin/bash
#this is like u3Lab03 except instead of using a subshell
#to extend scope, assign the entire output to a variable
#named maxL, and then create required output by cutting
#appropriate tokens out of maxL

maxL="$( for i in * ; do
  if [ -f $i ] ; then
     wc -l $i
  fi
done | sort -n | tail -1
)"
echo -en "File "
echo -en $maxL | cut -d' ' -f2 | tr -d '\n'
echo -en " has the most lines ("
echo -en $maxL | cut -d' ' -f1 | tr -d '\n'
echo ")"
exit 0

