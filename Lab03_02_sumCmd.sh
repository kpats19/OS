#2. Write a shell script to perform all Arithmetic 
#   Operations using Command line arguments. 
#!/bin/bash
echo "sum = $(($1 + $2))"
echo "sub = $(($1 - $2))"
echo "mul = $(($1 * $2))"
echo "div = $(($1 / $2))"
echo "mod = $(($1 % $2))"
