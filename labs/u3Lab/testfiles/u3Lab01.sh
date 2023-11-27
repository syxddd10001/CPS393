#!/bin/bash
echo "Enter a number: "
read NUMBER

echo "${NUMBER}" | sed -e "s/\./ + 0./" | sed -e "s/$/ \= $NUMBER/"


