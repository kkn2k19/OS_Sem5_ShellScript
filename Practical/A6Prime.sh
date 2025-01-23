# Q. Write a shell script to generate the prime numbers from 1 to 100.

#!/bin/bash
for ((num=2; num<=100; num++))
do
    is_prime=1
    for ((i=2; i<num; i++))
    do
        if [ $((num % i)) -eq 0 ]; then
            is_prime=0
            break
        fi
    done
    if [ $is_prime -eq 1 ]; then
        echo $num
    fi
done

#OUTPUT ---
# karan@Karan MINGW64 ~/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical (main)       
# $ sh A6Prime.sh 
# 2
# 3
# 5
# 7
# 11
# 13
# 17
# 19
# 23
# 29
# 31
# 37
# 41
# 43
# 47
# 53
# 59
# 61
# 67
# 71
# 73
# 79
# 83
# 89
# 97