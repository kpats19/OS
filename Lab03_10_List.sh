#10. To search for a certain pattern in the files 
#existing in the current directory.

echo “Enter total no of elements”
read n
i=0
echo “Enter the elements”
while [ $i -lt $n ]
do
read a[i]
i=`expr $i + 1`
done
echo ” Enter the element to search”
read k
j=0
flag=0
while [ $j -lt $n ]
do if [ $k -eq ${a[j]} ]
then
flag=1
break
fi
j=`expr $j + 1`
done
if [ $flag -eq 1 ]
then
echo “number is found at `expr $j + 1` position”
else echo ” Element is not found”
fi
