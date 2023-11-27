#Usage awk -f p2.awk [fnames]
#Program to print only field 2 and 3 of each record
#Strings "F2" and "F3" are printed before appropriate field
{print "F2:",$2,"F3:",$3}

