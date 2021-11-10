# loop.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 09/28/2021
# Date/time last modified: 09/29/2021
# Purpose: This program is series of examples of how loops are used.
# Input: integers and strings
# Output: rows and columns

# Problem 1
# This problem print out the lowercase letters from a to z one per line

for i_1 in range(ord('a'),ord('z')): # iterates from 97 to 122
    print(chr(i_1), end=' ') # prints the character
    print()  # prints new line

print( )

# Problem 2
# prints a star right-angled triangle given a number of stars
# prompts the user for the number of lines in the triangle
num_star = int(input('Enter the number of lines in the triangle: '))

# Makes sure that the minimum number of lines entered by the user is 1
# and the maximum is 50 
if (num_star < 1) or (num_star > 50):
    print('Invalid input')
# when the entered number is in the range of 1-50 this loop runs
else:
    for i in range(num_star,0,-1):  # 
        for j in range(num_star-i): # prints the height of the triangle
            print('', end='')  # prints new line
        for j in range(i):    #prints the triangle
            print('*', end='')
        print()
      
print( ) #prints new line

print()
 
print('Problem Two')
user_input = int(input('Enter a number: '))

if user_input <1 or user_input>50 :    
    print('Invalid input')
else:    
    for ii in range (user_input,0,-1):        
            print(str(ii * '*').rjust(user_input))
            
print()


# Problem 3
# prints and counts each vowel sounds in a string
# prompts the user for a string input
user_input = str(input('Enter a string: '))

# intialzes the vowel counters
a = 0
e = 0
i = 0
o = 0
u = 0

# checks each word entered for by the user for a vowel
for n in user_input: 
    n = n.lower()  # converts each character to a lowercase
    if n == 'a':   # checks for vowel a in user input
        a += 1     # if true count
    elif n == 'e': # checks for vowel e in user input
        e += 1     # counts e
    elif n == 'i': # checks for vowel i in user input
        i += 1     # counts i
    elif n == 'o': # checks for vowel o in user input
        o += 1     # counts o
    elif n == 'u': # checks for the vowel u in user input
        u += 1     # counts u
 
# prints out the counted vowels and aligns the numbers to the right
print('# of a\'s:{:-5d}'.format(a))
print('# of e\'s:{:-5d}'.format(e))
print('# of i\'s:{:-5d}'.format(i))
print('# of o\'s:{:-5d}'.format(o))
print('# of u\'s:{:-5d}'.format(u))

print( )   # prints new line

# Problem 4
List = []   # creates an empty list

word = input('Enter a word(quit to end): ') # prompts the user for a word

while (word.lower() != 'quit'):   # check if the sentinel word quit was entered
    if word == 'quit':      # stops the loop when sentinel is entered
        break
    if len(word) < 1:       # ensures user enters at least one letter or word
        pass
    elif ' ' in word:       # checks for spaces
        pass
    elif '\t' in word:     # checks for tabs
        pass
    elif '\n' in word:    # checks for new line
        pass
    else:
        List.append(word)  # adds valid words to the list
        
    # prompts user for next word    
    word = input('Enter a word(quit to end): ')

# sorts list in an asecnding order
List.sort()
print('Sorted list: ') #prints prompt
for ii in List:     # prints the sorted list one per line
    print (ii)

print() # prints new line
        
        