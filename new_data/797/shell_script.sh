#!/bin/sh

# This script is for storing the voi.mat file names, in pairwise manner within the files with names formed with combined name of the folders
# These created files can then be used in the matlab script to get loaded and do the work
# Before running this script make a pairwise_matfilenames folder in which these files will get created

filename1="file1"
filename2="file2"

while read -r line1
do
        folder1="$line1"
        while read -r line2
        do
                folder2="$line2"
		
		newfile=$folder1"_"$folder2
                write_file="./pairwise_matfilenames/"$newfile
                cmd="touch $write_file"
                eval $cmd

                cmd1="ls $folder1"
                files1="$(eval $cmd1)"
                cmd2="ls $folder2"
                files2="$(eval $cmd2)"

                arr1=$(echo $files1 | tr " " "\n")
                arr2=$(echo $files2 | tr " " "\n")

                for element1 in $arr1
                do
                        for element2 in $arr2
                        do
                                echo $element1 >> $write_file
                                echo $element2 >> $write_file
                        done
                done
        done < "$filename2"
done < "$filename1"

