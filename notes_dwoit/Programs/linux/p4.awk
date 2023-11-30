#Usage awk -f p4.awk [fnames]
#e.g.  awk -f p4.awk p4.awk.data
#print record followed by sum of its first 3 fields
#for those records starting with a number (followed by a any char)
#also print total of all first 3 fields for each printed record
#note: non number fields treated as zero
BEGIN {t=0}
/^[0-9]./ {ft=$1+$2+$3; t=t+ft; print $0, ft}
END {print "Total:",t}
