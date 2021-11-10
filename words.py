# words.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 09/23/2021
# Date/time last modified: 09/23/2021
# Purpose: This program calculates the number of bills needed to give change.
# Input: 10 words
# Output: number of short and long words

'''create an empty list named short_words'''
short_words = []

''' create an empty list named long_words '''
long_words = []

print('Enter a maximum of 10 words')

for x in range(10):
     ''' input a string (use a prompt) and store it in a variable called word '''
     word = input('Enter a word: ')
  
     ''' Note: You must use an if-else statement. '''
    
     ''' if the word is 5 letters or less, append it to short_words, otherwise append it to long_words ''' 
     if len(word) <= 5:
            short_words.append(word)
            
     else:
           long_words.append(word)
 
    # the loop is over, move all the way back to the left edge       

''' print a message that says how many short words there were '''        
print('There are', len(short_words), 'short words in this message' )

''' print the short_words list '''
print('Short word list:', short_words)

''' print a message that says how many long words there were '''
print('There are', len(long_words), 'long words in this message')

''' print the long_words list '''
print('Long word list:', long_words)
    