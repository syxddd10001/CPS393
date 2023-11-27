#!/bin/bash
if [ $# -eq 0 ] ; then 
  echo "usage: $0 program-to-test" 
  echo "   eg: $0 factorial.sh"
  exit 1 
fi
echo "TESTING BAD INPUT"
echo "---------"
for i in -3 4a @26 ; do
  echo "$i"
  echo $i | ./$1
  echo "---------"
done

echo "TESTING GOOD INPUT"
echo "---------"
#for i in 0 1 2 3 4 5 ; do
for i in {0..5} ; do
  echo "$i"
  echo $i | ./$1
  echo "---------"
done
exit 0
