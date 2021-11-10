# computingChange.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 08/31/2021
# Date/time last modified: 08/31/2021
# Purpose: This program calculates the number of bills needed to give change.
# Input: amount of change to give in dollars
# Output: number of bills (twenties, tens, fives, and ones)

# reads in amount of money to change
amount_to_change = int(input('Enter amount to change: '))

# prints out the amount user entered
print('Change for $',amount_to_change) 

# checks to see how many 20s are in the amount entered
num_twenties = amount_to_change // 20
# stores the new amount of money left after taking out the 20s 
amount_to_change = amount_to_change % 20

# checks to see how many 10s are in the amount entered
num_tens = (amount_to_change) // 10
amount_to_change = amount_to_change % 10

# checks how many 5s are in the amount entered
num_fives = (amount_to_change) // 5
# checks how many ones are in the new amount
num_ones = amount_to_change % 5

# prints the change given to the customer
print(num_twenties, 'twenty dollar bill(s) and', num_tens, 'ten dollar bill(s)')
print(num_fives, 'five dollar bill(s) and', num_ones, 'one dollar bill(s)')
