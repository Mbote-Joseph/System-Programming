#!/bin/bash
filename='Gachororo.txt'
n=1
while read text; do
# reading each line
echo "Line No. $n : $text"
n=$((n+1))
done < $filename

# Counting words
word=$(echo -n "$text" | wc -w)
# Counting characters
char=$(echo -n "$text" | wc -c)

# Counting Number of white spaces (Here,specificly " ")
# sed "s/ change this to whitespace//g"
space=$(expr length "$text" - length `echo "$text" | sed "s/ //g"`)

#character without whitespace
total_characters=`expr $char - $space`

# Output
echo "Number of Words = $word"
echo "Number of Characters = $char"
echo "Number of White Spaces = $space"
echo "Number of characters without whitespace = $total_characters"
