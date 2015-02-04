#3. Write a shell script to scan two variables and to display their sum, mul, 
#div, sub and modulo division as per the user choice.
#(no need to continue, only once is OK)
#!/bin/bash
echo "Please enter first number"
read first
echo "Please enter second number"
read second

echo "1)sum 2)sub 3)mul 4)div 5)mod"
echo "Enter your Choice"
read num

case $num in
	1) echo "sum = $((first + second))" ;;
	2) echo "sub = $((first - second))" ;;
	3) echo "mul = $((first * $second))" ;;
	4) echo "div = $((first / $second))" ;;
	5) echo "mod = $((first % $second))" ;;

esac
