# stringPractice.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written 09/08/2021
# Date/time last modified 09/08/2021
# Purpose: Counts the number of string in a sentence
# Input: String
# Output: The length of string, The first and last character of the string 

String = (input('Enter a sentence or string: '))
Length = len(String)
print('The length of the string is',str(Length))
print('The first character of the string is',String[0])
print('The last character of the string is',String[-1])