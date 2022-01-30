#!/bin/bash
sudo apt install jq
points_file=$1
max_file=$2
total=$(cut -d ':' -f 2 "$points_file"|cut -d '/' -f 1 |sed s/'^$'/0/ | paste -sd '+'|bc)
max=$(jq '.tests[]|.points' "$max_file" |paste -sd '+'|bc)

gh pr comment 1 -b "Total: $total/$max"
echo "Total: $total/$max"



#gh pr comment 1 -b "Total: $line "


#echo "ACTOR = $GITHUB_ACTOR "

#echo "RUN NUMBER= $GITHUB_RUN_NUMBER"
#if [ "$GITHUB_RUN_NUMBER" -gt 4 ]
#then
#gh pr comment 1 -b "Total: $total / $max "
#fi
