echo "Enter a number:"
read num
if [ `expr $num % 2` -eq 0 ]
then 
	echo "$num is an even number."
else
	echo "$num is a Odd number."
fi	
