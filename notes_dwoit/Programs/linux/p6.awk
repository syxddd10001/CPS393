#Usage awk -f p6.awk [fnames]
#Program to print only field 2 and 3 of each record
#Note awk's Field Separator defaults to one or more
# spaces and/or tabs
#try this for stdin (note 2nd line has some tabs):
#1         2         3           4
#1	 2		3	  	 4
{print $2,$3}

