# evenOdd.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 09/23/2021
# Date/time last modified: 09/23/2021
# Purpose: This program calculates the number of bills needed to give change.
# Input: 10 interger numbers
# Output: number of even and odd numbers

''' create an empty list named even_numbers '''
even_numbers = [] 

''' create an empty list named odd_numbers'''
odd_numbers = [] 

print('Enter a maximum of 10 numbers')

for x in range(10):
     ''' input an integer(use a prompt) and store it in a variable called number'''
     number = int(input('Enter a number: '))
  
     ''' Note: You must use two distinct if statements.'''
    
     ''' if the number is even, append it to the even_numbers list '''
     if number % 2 == 0:
          even_numbers.append(number)
         
     ''' if the number is odd, append it to the odd_numbers list '''
     if number % 2 != 0:
          odd_numbers.append(number)
  
# the loop is over, move all the way back to the left edge
        
''' print a message that says how many even numbersthere were '''
print('There are', len(even_numbers), 'even numbers in this message' )

''' print the even_numberslist '''
print('Even numbers list:', even_numbers)

''' print a message that says how many odd numbersthere were '''     
print('There are', len(odd_numbers), 'odd numbers in this message')

''' print the odd_numberslist '''
print('Odd numbers list:', odd_numbers)