#!/bin/bash
cat $1 | while read line ; do
  if [ "$(echo $line | grep '\.' )" ] ; then
    echo "$line" | sed -e 's/\./ + 0\./' -e "s/$/ = $line/"
  else
     echo $line
  fi
done

#alternately, could have used redirection to read file:
#  while read line ; do
#     etc
#  done <$1

