#1. Write a shell script to scan two variables and to display their 
#sum, mul, div, sub and modulo division.
#!/bin/bash
echo "Please enter first number"
read first
echo "Please enter second number"
read second
sum=$((first + second))
echo "sum = $((first + second))"
echo "sub = $((first - second))"
echo "mul = $((first * $second))"
echo "div = $((first / $second))"
echo "mod = $((first % $second))"
