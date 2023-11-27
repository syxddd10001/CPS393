#!/bin/bash

for i ; do
  echo -en "${i}: "
  echo $(ls -d ca^{i}* 2>/dev/null | wc -l) entries
done
exit 0
