#! /bin/bash
file="Gachororo.txt"

while IFS= read -r line
do
  echo "$line"
done < "$file"

characters=$(echo -n "$line"| wc -c)
spaces=$(expr length "$line" - length `echo "$line" | sed "s/ //g"`)

charactersCounted=`expr $characters - $white_spaces`

echo "Total no of characters without white spaces = $charactersCounted"
