#!/bin/bash
#splits stdin so one sentence per line, where sentence ends in .
#does not print sentence's trailing period. 

#tr makes stdin one long line, then 
#xargs delimits by . and prints one field per line
#sed removes the spaces added by tr
tr '\n' ' ' | xargs -d'.' -n1 | sed -e 's/^ //' -e '/^$/d'


#this is a solution without xargs
#function lastchar prints last character of $1
#lastchar () {
#  echo ${1: -1}
#}
#tr '\n' ' ' | (read line ; for word in $line ; do 
#  if [ "$(lastchar $word )" = "." ] ; then   
#    echo "${word}"
#  else
#    echo -n "${word} "
#  fi
#done )

