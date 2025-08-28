#!/bin/bash

out_file="results.txt"
in_file=$1

# Checking if the log file exists
if [ -z "$in_file" ]; then
   echo "The first argument doesn't exist"
   exit 1
else

   echo "Removing file: " $out_file
   rm -rf $out_file

   # Count the number of logs seen
   ver=`       grep -o "BB_VERSION" $in_file | wc -l`
   tasks=`     grep -o "Tasks"      $in_file | wc -l`

   # Find the distro
   distro=`    grep -e "MACHINE"    $in_file | tail -n 1 | awk '{print $3}' | sed 's/"//g' `
   
   echo ""                             | tee -a $out_file
   echo "Scanning file: $in_file"      | tee -a $out_file
   echo ""                             | tee -a $out_file

   echo "BB_VERSION: " $ver            | tee -a $out_file
   echo "Tasks:      " $tasks          | tee -a $out_file
   echo "Distro:     " $distro         | tee -a $out_file
   
   echo ""                             | tee -a $out_file


   echo ""
   echo ""
   echo "cat " $out_file
   cat $out_file
fi