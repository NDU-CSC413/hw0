#!/bin/bash
builtdir=build
if [ "$#" -ne 4 ] 
then
 echo "usage: name_of_test report_file points_file token_file"
 exit 1
fi
totest=$1
report=$2
points=$3
tfile=$4
cmake --build $builtdir --config Release --target $totest >>$report 2>>$report 
#> $report
#./test0 -r compact 2>>report.txt >>points.txt
if [ "$?" -eq 0 ]
then 
token=$(head -1 $tfile |cut -d ' ' -f 3|sed s/\"//g)
line=$($builtdir/$totest 2>> $report |grep $token |sed s/$token//)
echo $line >> $points
total=$(echo $line |cut -d ":" -f 2 |cut -d "/" -f 2)
else
echo "${totest} failed to Compile:0">>$points
fi

