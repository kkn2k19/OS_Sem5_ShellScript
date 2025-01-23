# Q. Write a shell script to check a given no is positive or negative.

#!/bin/bash
echo "Enter a number:"
read num
if [ $num -gt 0 ]; then
    echo "The number is positive."
elif [ $num -lt 0 ]; then
    echo "The number is negative."
else
    echo "The number is zero."
fi


#OUTPUT ---
# karan@Karan MINGW64 ~/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical (main)
# $ sh A1PositiveNegative.sh 
# Enter a number:
# 5
# The number is positive.

# karan@Karan MINGW64 ~/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical (main)
# $ sh A1PositiveNegative.sh 
# Enter a number:
# -1
# The number is negative.