#!/bin/bash
#MANY possible solutions. Here are two.
# In first one:
# ! means NOT, and -empty lists only empty entries, 
# and -type f restricts entries to files only
find . ! -empty -type f 
#or this, which gets the same thing by requesting files
# whose size is greater than zero bytes:
# + means "more than", 0 is zero, and c means bytes
#find . -size +0c -type f 


