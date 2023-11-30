#!/bin/bash
#prints line $1 of file $2
printLine () {
  head -$1 $2 | tail -1
}

#YES if file $3 has identical lines $1 and $2
if [ "$(printLine $1 $3)" = "$(printLine $2 $3)" ] 
then 
  echo YES
else 
  echo NO
fi
