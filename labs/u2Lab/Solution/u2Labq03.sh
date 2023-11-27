#!/bin/bash
#ASSUMES program always run with 3 command line arguments: 
#  2 readable files and 1 integer
echo -n "First $3 lines of $1 and last $3 lines of $2 "
head -$3 $1 >F1
tail -$3 $2 >F2
diff -sq F1 F2 | cut -d' ' -f5-6
rm F1 F2
