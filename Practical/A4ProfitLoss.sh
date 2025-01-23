# Q. Write a shell script to print profit or loss, also calculate profit% or loss%. (cp and sp is given by user)

#!/bin/bash
echo "Enter cost price:"
read cp
echo "Enter selling price:"
read sp
if [ $sp -gt $cp ]; then
    profit=$((sp - cp))
    profit_percent=$((profit * 100 / cp))
    echo "Profit: $profit (Profit%: $profit_percent%)"
elif [ $sp -lt $cp ]; then
    loss=$((cp - sp))
    loss_percent=$((loss * 100 / cp))
    echo "Loss: $loss (Loss%: $loss_percent%)"
else
    echo "No profit, no loss."
fi

#OUTPUT ---
# karan@Karan MINGW64 ~/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical (main)       
# $ sh A4ProfitLoss.sh 
# Enter cost price:
# 1000
# Enter selling price:
# 800
# Loss: 200 (Loss%: 20%)

# karan@Karan MINGW64 ~/OneDrive/Desktop/SC-R/CODES/OS-shellScript/Practical (main)       
# $ sh A4ProfitLoss.sh 
# Enter cost price:
# 100
# Enter selling price:
# 150
# Profit: 50 (Profit%: 50%)