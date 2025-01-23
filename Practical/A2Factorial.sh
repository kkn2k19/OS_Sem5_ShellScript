# Q. Write a shell script to print the factorial of a given number.

#!/bin/bash
echo "Enter a number:"
read num
factorial=1
for ((i=1; i<=num; i++))
do
    factorial=$((factorial * i))
done
echo "Factorial of $num is $factorial"

#OUTPUT ---
# karan@Karan MINGW64 ~/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical (main)       
# $ sh A2Factorial.sh 
# Enter a number:
# 4
# Factorial of 4 is 24

# karan@Karan MINGW64 ~/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical (main)       
# $ sh A2Factorial.sh 
# Enter a number:
# 5
# Factorial of 5 is 120