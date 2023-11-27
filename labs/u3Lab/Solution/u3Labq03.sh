#!/bin/bash
#pipe the original output into variables size and name
#then use $size and $name to output with required formatting
#NOTE need to put the read into a subshell so that the
#scope of the variables extends to the following echo.
for i in * ; do
  if [ -f $i ] ; then
     wc -l $i
  fi
done | sort -n | tail -1 | ( read size name
echo "File $name has the most lines ($size)"
)
exit 0

