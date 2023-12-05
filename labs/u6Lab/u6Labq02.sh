#!/bin/bash

#echo $(awk '{prin}' testfiles/u6Labq02.infile)


echo $(awk 'BEGIN{print} {line=$0}; NR < 4{print line ", "} END{print}' u6Labq02.in)
