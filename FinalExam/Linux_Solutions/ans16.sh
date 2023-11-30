#!/bin/bash
#Prints a list of all words on stdin that start with $1
#in any case

lower=$(echo $1 | tr "A-Z" "a-z")  #$1 in lower case
while read line ; do
  for word in $(echo $line) ; do
    found=$(echo $word | tr "A-Z" "a-z" | grep "^$lower")
    if [ "$found" ] ; then
      echo $word
    fi
  done
done
