#!/bin/bash

days_in_month () {
 NumDays=(31 28 31 30 31 30 31 31 30 31 30 31)
 echo ${NumDays[$(($1-1))]}
}

month_name () {
 Month=(Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec)
 echo ${Month[$(($1-1))]}
}

echo "$(month_name $1) has $(days_in_month $1) days"
