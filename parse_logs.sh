#!/bin/bash

# Checking if the log file exists
if [ -z "$1" ]; then
   echo "The first argument doesn't exist"
   exit 1
else
   echo "The first argument is: $1"

   # Count the number of logs seen
   ver=`grep -o "BB_VERSION" $1 | wc -l`
   Tasks=`grep -o "Tasks" $1 | wc -l`

   echo "BB_VERSION: " $ver
   echo "Tasks: " $Tasks
fi