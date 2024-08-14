echo "Enter a number:"
read num
i=2
 
if [ $num -le 3 ]
then
    echo "$num is  a prime number."
    exit
fi
 
while [ $i -lt $(($num / 2)) ]
do
    if [ `expr $num % $i` -eq 0 ]
    then
        echo "$num is not a prime number."
        exit
    fi
    i=$((i+1))
done
 
echo "$num is a prime number."
