#Usage awk -f u6Labq01.awk [infiles]
#prints number of blank lines found in input
#try it with the input files in testfiles: empty, blanks?
BEGIN { numblanks=0 }
/^$/  { numblanks++ }
END   { print "Input file " FILENAME " has " numblanks " blank lines out of " NR " total lines"}

