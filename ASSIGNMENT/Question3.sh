#! /bin/bash

echo "Enter the users uid :"
read UID

if [ $UID ] && [ $UID -eq $UID 2>/dev/null ]
  
  then
    echo "Number of times  logged is = `cat /etc/passwd | grep $UID -c`"
   
  else
    echo "Invalid used UID !"
    echo "Enter User UID :"
fi