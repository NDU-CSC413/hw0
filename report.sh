#!/bin/bash

 total=$(cut -d '/' -f 1 points.txt |paste -sd '+'|bc)
max=$(cut -d '/' -f 2 points.txt |paste -sd '+'|bc)

tests=$(paste -sd ' ' points.txt)
echo $total
echo $max
c=0
for i in $tests
do
echo "Test $c"
echo "------"
echo $i 
c=$((c+1))
echo "=========="
done
#gh pr comment 1 -b "Total: $line "


#echo "ACTOR = $GITHUB_ACTOR "

#echo "RUN NUMBER= $GITHUB_RUN_NUMBER"
#if [ "$GITHUB_RUN_NUMBER" -gt 4 ]
#then
#gh pr comment 1 -b "Total: $total / $max "
#fi
