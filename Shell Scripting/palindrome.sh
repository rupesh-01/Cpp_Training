#!/bin/bash

echo -e "Please enter the string without any spaces : \c"
read word
echo $word
for i in $( seq 0 ${#word} )
do
	rword=${word:$i:1}${rword}
done
if [ "$word" == "$rword" ]
then
	echo "You entered a palindrome string"
else
	echo "The entered stirng is not palindrome"
fi
