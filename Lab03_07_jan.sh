#7. Write a shell script which displays January if we 
#enter Jan, Janu, Janua or January.(use of case)

#!/bin/bash
echo "Please enter a spell"
read first
case $first in
	Jan) echo "January" ;;
	Janu) echo "January" ;;
	Janua) echo "January" ;;
	January) echo "January" ;;
esac
