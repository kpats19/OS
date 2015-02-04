#9. Write a shell script that asks the capital of Gujarat 
#and repeats the question until the user gives correct answer.

#!/bin/sh
count=0

while [ $count -eq 0 ]
do
	echo "Please enter number"
	read first
	if [ $first = "gandhinagar" ]
	then
		echo "correct"
		count=`expr $count + 1`
	else 
		echo "incorrect...try again"
	fi
	
	

done 
