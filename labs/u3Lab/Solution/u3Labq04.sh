#!/bin/bash
cat /usr/courses/cps393/dwoit/labs/lab03/testfiles/out1 | sed -e 's/dog/DOG/g' | sed -e 's/[0-9][0-9]*$/X/'

