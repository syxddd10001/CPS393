#!/bin/bash
#this answer uses cut instead of sed
cat $1 | while read line ; do
if [ "$(echo $line | grep '\.' )" ] ; then
   whole="$(echo $line | cut -d'.' -f1)"
   fract="$(echo $line | cut -d'.' -f2)"
   echo "$whole + 0.$fract = $line"
else
   echo $line
fi
done

#alternately, could have used redirection to read file:
#  while read line ; do
#     etc
#  done <$1

