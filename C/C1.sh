echo "Enter the value of n:"
read n
echo "The Even Numbers from 1 to $n:"
for i in $(seq 2 $n)
do
   if [ $(($i % 2)) -eq 0 ]
   then
        echo $i
   fi
done
