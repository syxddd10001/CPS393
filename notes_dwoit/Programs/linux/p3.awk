#Usage awk -f p3.awk [fnames]
#e.g.  awk -f p3.awk p3.awk.data
#print only those records where $5 is = 0 and $6 < 8
$5==0 && $6 < 8 {print $0}
