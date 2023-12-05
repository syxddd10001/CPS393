#!/bin/bash
#for what each line means, see comments below. Cannot put
#comments at the end of each line because of the single quotes.
#This would cause the comments to be included in the string
#sent to awk which would cause an awk error

   awk 'NR==1 {print}
        NR>1 && $2=="F" {print ($1-32) / 1.8 "\tC"}
	NR>1 && $2=="C" {print}' \
        $1
#NR==1 {print} just print the first line (the headings)
#NR>1 && $2=="F" for lines other than the heading line that
#                have Fahrenheit values
#  {print ($1-32) / 1.8 "\tC"} convert $1 from Fahrenheit to Celsius
#                and print the result followed by tab and C
#NR>1 && $2=="C" {print} just print lines with Celsius values
# remember \ is bash line continuation character. We need it so that
# bash sends $1 to the awk command. If it wasn't there, the awk
# command would run using stdin, and after that, bash would try to
# execute $1, which would be an error.

