#!/bin/bash
#There are MANY possible solutions. 4 are given below.
#could use option --file-type instead of -p 
#could use option -F instead of -p, but it appends '*' to 
#files with x perms, so grep command must change too. 

# in this solution,
# we use ^ and $ to match start and end of entry, so that there 
#  can be no characters other than those we're specifying (between 
#  the ^ and $)
# we use [A-Z] to match ONE upper-case letter, so [A-Z]*  matches
#  0 or more upper-case letters,
# we use / to match a literal slash (as required by question), 
# we use {0,1} to match 0 or 1 occurrences of the prior / character,
#  which is necessary since / only occurs on directory entries. But
#  need \ before the {  and } protect them from the shell (\ not
#  necessary if use grep option -E).
ls  -p | grep "^[A-Z][A-Z]*/\{0,1\}$"  

# in this solution, we use | ("or") which requires option -E. 
#  This matches one or more upper case letters OR one or more
#  upper-case letters followed by a /
#ls   -p | grep -E "^[A-Z][A-Z]*$|^[A-Z][A-Z]*/$"   

# in this solution, we use two separate ls commands
#ls   -p | grep "^[A-Z][A-Z]*$"
#ls   -p | grep "^[A-Z][A-Z]*/$"

# in this solution, use +( ) to match one or more upper case letters.
# But here ls needs -d because it is given an argument, and will
# list CONTENTS of subdirectories unless you tell it not to, with 
# -d option (in the above solutions, ls had no argument, so no -d)
#ls  -dp +([A-Z])  

