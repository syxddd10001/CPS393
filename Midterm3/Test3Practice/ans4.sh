#!/bin/bash

for v in $@ ; do
	echo "$v: $(ls | grep "^$v" | wc -w) entries"
done
