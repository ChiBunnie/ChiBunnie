# randomNumbers.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 09/28/2021
# Date/time last modified: 09/29/2021
# Purpose: This program generates random numbers between 1-1000 and arranges them in a matrix form.
# Input: No user input required
# Output: A matrix for numbers between 1-1000

# imports random numbers
import random

# creates an empty list to store the random  numbers
rand_num = []

# Adds 100 genreated numbers btw 1-1000 into the list
for i in range(153):
    R_number = random.randint(1, 1000)
    rand_num.append(R_number)

# prints the prompt
# intialzes row counter i to 0

print('The list of random numbers contains: ')
print()


# Prints the list in a martix form
n = 153
j = 0
while j < (len(rand_num)):    # The loop runs when the row counter < list length
    n = j    # intialzes column couter to 0 
    # prints the random number in martix form
    print('{:-10d}'.format(rand_num[n]),end='')
    j += 1    # imcreases the column counter by 1
    if(j % 10 == 0):
        print()   

    print()    # prints new line