#!/bin/bash
echo 'Enter the file path :'
read path
files=$path/*.bmp
for i in `ls $path/*.bmp`; do convert $i $i.jpg; done
printf 'The Changed files are : %d\n' "${#files[@]}"