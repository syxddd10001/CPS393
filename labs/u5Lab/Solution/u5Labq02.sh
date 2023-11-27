#!/bin/bash
#prompts user for a number and prints its factorial line like
# 5! = 5*4*3*2*1 = 120
#if number is 0 or 1 omit intermediate product, e.g., print
# 0! = 1
#if number is not a non-negative integer, print
# number! is undefined 
#and exit with code 1; otherwise exit with code 0

read -p "Enter a number: " num       #read user input
#bad input
if [ "$(echo $num | grep [^0-9])" ] ; then
  echo "${num}! is undefined"
  exit 1
fi

#special case: input is 0 or 1
if [ $num -lt 2 ] ; then
  echo "${num}! = 1"
else 
  #good input
  prodstring=$(eval "echo {1..$num}" | rev | tr ' ' '*') 
  echo $num! = $prodstring = $(($prodstring))
fi
exit 0
