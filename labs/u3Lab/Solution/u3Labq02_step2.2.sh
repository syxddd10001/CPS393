#!/bin/bash
#solution to question 2, suggested step 2.2
while read line ; do
    echo "$line" | sed -e 's/\./ + 0\./' -e "s/$/ = $line/"
done

#alternately, could have used redirection to read file:
#  while read line ; do
#     etc
#  done <$1

