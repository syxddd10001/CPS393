#!/bin/bash
shift $(($#-1))
if [ "$(echo $1 | grep '[^0-9]' )"  ] ; then
  echo NO
else
  echo YES
fi

