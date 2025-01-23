# Q. Write a shell script to check a given no is even or odd.

#!/bin/bash
echo "Enter a number:"
read num
if [ $((num % 2)) -eq 0 ]; then
    echo "The number is even."
else
    echo "The number is odd."
fi

#OUTPUT ---
# karan@Karan MINGW64 ~/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical (main)       
# $ sh A5EvenOdd.sh 
# Enter a number:
# 10
# The number is even.

# karan@Karan MINGW64 ~/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical (main)       
# $ sh A5EvenOdd.sh 
# Enter a number:
# 9
# The number is odd.