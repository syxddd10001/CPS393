#!/bin/bash
#ASSUME stdin is float with correct form: x.y
#sed -e 's/\./ + 0\./'    #answer to part 1.1
read line
echo "$line" | sed -e 's/\./ + 0\./' -e "s/$/ = $line/"
