#!/bin/bash

max=$(head -1 report.txt|cut -d ' ' -f 3|cut -d '/' -f 2)
total=$(head -1 report.txt|cut -d ' ' -f 3|cut -d '/' -f 1)
cat report.txt
line=$(head -1 report.txt)
gh pr comment 1 -b "Total: $line "


#echo "ACTOR = $GITHUB_ACTOR "

#echo "RUN NUMBER= $GITHUB_RUN_NUMBER"
#if [ "$GITHUB_RUN_NUMBER" -gt 4 ]
#then
#gh pr comment 1 -b "Total: $total / $max "
#fi
