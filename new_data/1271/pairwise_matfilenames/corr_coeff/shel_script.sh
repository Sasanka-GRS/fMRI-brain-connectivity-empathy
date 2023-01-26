#!/bin/sh

filename1="dele"

while read -r line1
do
	folder1="$line1"
	cmd1="cat $folder1"
        eval $cmd1
done < "$filename1"
