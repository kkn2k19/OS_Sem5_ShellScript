echo "Enter Principle:"
read p
echo "Enter Rate:"
read r 
echo "Enter Time:"
read t 
si=$(expr $p \* $r \* $t / 100)
echo "The Simple Interest is: "$si
