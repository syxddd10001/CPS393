#!/bin/bash
#if no command line argument given, then $1 is null, and the awk 
#below #reads from stdin (otherwise from file $1)

echo $(awk 'NR > 1{print line", "}{line=$0;}END{print $0" "}' $1)
