#!/bin/bash 
 
  
 
echo -n "Enter the first number : " 
read num1 
echo -n "Enter the second number : " 
 
read num2 
echo -n "Enter the first number : " 
read num3
echo -n "Enter the first number : " 
read num4
 
sum=`expr $num1 + $num2 + $num3 + $num4` 
echo "sum of two value is $sum"