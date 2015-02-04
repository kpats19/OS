#4. Write a shell script to find greatest of two. 
#Script must consider the case where two numbers are equal.
#!/bin/bash
echo "Please enter first number"
read first
echo "Please enter second number"
read second

if [ $first -eq 0 ] && [ $second -eq 0 ]
then
	echo "Num1 and Num2 are zero"
elif [ $first -eq $second ]
then
	echo "Both Values are equal"
elif [ $first -gt $second ]
then
	echo "$first is greater than $second"
else
	echo "$first is lesser than $second"
fi
