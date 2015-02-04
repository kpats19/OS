#6. Write a shell script, which scans the name of the command and executes it.

loop=1
while [ $loop -eq 1 ]
do
	echo "Enter a command " 
	read a
	$a
	echo " Do you want to continue [1/0] : "
	read b
	if [ $b -eq 1 ]
		then
		loop=1
	else
		loop=0
	fi
done
