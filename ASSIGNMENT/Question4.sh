#!/bin/sh


emptyFiles=`find ./ -type d -empty`
echo $emptyFiles


dateCreated=`stat -c %y "$emptyFiles"`

echo "Created on : $dateCreated"
