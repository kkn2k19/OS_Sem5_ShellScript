echo "Enter First NUmber:"
read a
echo "Enter Second Number"
read b
echo "Enter Third NUmber"
read c

if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo "$a is the greatest number."
elif [ $b -gt $a ] && [ $b -gt $c ]
then
    echo "$b is the greatest number."
else
    echo "$c is the greatest number."
fi
