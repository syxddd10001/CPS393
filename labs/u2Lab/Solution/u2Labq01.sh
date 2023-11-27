#!/bin/bash
#the ls command below lists entries starting with ONE of a,b,c,d
#followed by any (possibly null) string, followed by ONE of a,t
#the -d option is needed to make ls just list the NAMES (and not
#the contents) of its subdirectories.
ls -d [a-d]*[at]
#or
#ls -d [abcd]*[at]

