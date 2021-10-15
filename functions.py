# functions.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 10/06/2021
# Date/time last modified: 10/07/2021
# Purpose: This program is series of examples of how to use functions.
# Input: integers and strings
# Output: rows and columns

                            # Function definitions
# Function 1
# This function prints 5 string per line
def print5(string):
    
    # holds the number of characters to print
    n = 0
    
    # loop iterates over the string
    for i in string:
        if (n < 4):
            n += 1
            print(i, end='')
        elif (n == 4):
            n = 0
            print(i,'')
            
# Function 2
# This function return the different types of triangle 
# after the values of their sides are entered

def triangleType(side1, side2, side3):
    # checks if the equilateral
    if (side1 == side2 and side2 == side3 and side1 == side3):
        return 'Equilateral'
    # checks if the triangle is isoceles
    elif (side1 == side2 or side2 == side3 or side1 == side3):
        return 'Isosceles'
    # checks if the triangle is scalene
    elif (side1 != side2 and side1 != side3 and side2 != side3):
        return 'Scalene'
    
# Function 3
# This function prints the odd numbers in the range max
# it also prints 10 numbers per line
def printOddNumbers(max):
    # intializes the counts
    i = 1
    j = 1
    # prints 10 numbers per line
    while(i <= max):
        print('{:-8d}'.format(i), end='')
        if(j % 10 == 0):
            print()
        i += 2
        j += 1
            

                            # Main program
# Testing functions
# function 1

# prints the text
print('Testing Function #1')
print('')

# prompts the user to enter a string
word = input('Enter a string: ')

# calls the function print5
print5(word)

# prints new line
print('\n')


# Function 2

# prints the text
print('Testing Function #2')
print('')

# prompts the user to enter the sides of a triangle
S1 = int(input('Enter the first side of the Triangle(0 to quit): '))
S2 = int(input('Enter the second side of the Triangle(0 to quit): '))
S3 = int(input('Enter the third side of the Triangle(0 to quit): '))

# loops keeps running until any of the sides is 0
while (S1 != 0 and S2 != 0 and S3 != 0):
    # checks if the sentinal value 0 was entered
    if (S1 == 0 and S2 == 0 and S3 == 0):
        break
    else:
        # calls the funtion triangleType
        Triangle = triangleType(S1, S2, S3)
        print('')
        
        # prints the text
        print('This triangle is a/an ', Triangle, 'Triangle')
        
    # prompts user for values for the sides of the triangle
    S1 = int(input('Enter the first side of the Triangle (0 to quit): '))
    S2 = int(input('Enter the second side of the Triangle(0 to quit): '))
    S3 = int(input('Enter the third side of the Triangle(0 to quit): '))

# prints new line
print('\n')
    
# Function 3

# prints the text
print('Testing Function #3')
#prints blank line
print('')

# loop runs three times asking the user for a max value
for x in range(3):
    
        # prompts user for a max value
        num = int(input('Enter another maximum value: '))
        
        # calls the function printOddNumbers
        printOddNumbers(num)
        
        # prints new line
        print('')