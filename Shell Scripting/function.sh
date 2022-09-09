#!/bin/bash

function print(){
if [ $num -eq 0 ] 
then
	return
fi
echo $num
echo
num=$(( num-1 ))
print num
}
	
echo -e "Enter a numbers : \c"
read num1

temp=1
function factorial(){
if [ $num1 -eq 0 ]
then 
	return
fi
temp=$(( temp * num1 ))
num1=$(( num1-1 ))
factorial num1
}

factorial $num1
echo $temp
