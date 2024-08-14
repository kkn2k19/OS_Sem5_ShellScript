echo "Input a Number:"
read n
echo "Fcators of $n are:"
i=2
while [ $i -lt $n ]
do
   if [ $(($n % $i)) -eq 0 ]
   then 
      echo $i
   fi
   i=$((i+1))
done
