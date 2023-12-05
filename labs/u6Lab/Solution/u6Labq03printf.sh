#!/bin/bash
#like u6Labq03.sh except uses printf so that we don't get
#so many decimal places for the converted Fahrenheit values.

   awk 'NR==1 {print}
        NR>1 && $2=="F" {printf("%.1f\tC\n",($1-32) / 1.8)}
	NR>1 && $2=="C" {print}' \
        $1

