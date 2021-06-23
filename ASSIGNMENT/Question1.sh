#!/bin/bash
       
echo -n "Enter the first number to be added : "
read x1
echo -n "Enter the second number to be added : "
read x2
echo -n "Enter the third number to be added : "
read x3
echo -n "Enter the fourth number to be added : "
read x4

sum=`expr $x1 + $x2 + $x3 + $x4`
echo "sum of the four values is :  $sum"