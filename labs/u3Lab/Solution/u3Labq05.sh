#!/bin/bash
last | grep " $1 " | cut -c1-8 | sort | uniq 
#above is acceptable. However if $1 happens to be the day the
#log started, it will also catch the final line of last, such as:
#wtmp begins Sun Sep  2 11:40:05 2018 
#In this case, grep it away, as in:
last | grep " $1 " | cut -c1-8 | sort | uniq  | grep -v "^wtmp beg"
