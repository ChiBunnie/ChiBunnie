# stringFunctions.py
# CS 153 or 453
# Written by Chioma Abed-Amazu
# Date written: 10/19/2021
# Date/time last modified: 10/21/2021
# Purpose: This program test different scenarois for using string functions 
# Input: strings
# Output: strings or integers

                                # Function Definition
# Function 1
# This function removes the punctuation in a string with parameter s
def remove_punc(s):
    # assign the variable word to an empty string
    word = ''
    
    # iterates around the user string
    for ch in s:
        # checks if the each string is a digit, number or whitespace
        if (ch.isalnum() or ch.isspace()):
            # adds non-punctuation strings to the variable word
            word += ch
            
    # returns string without puntuation
    return word

# Function 2
# This function counts the number of words in a string with parameter s
def word_count(s):
    # returns the number of words the user string 
    #after spliting it using the spaces
    return(len(s.split()))


# Function 3
# This function compares a string and a list 
#then appends the list with words in the string
# but notin the list with parameters s and word_list
def add_unique(s, word_list):
    # iterates around the string after spliting it
    for ch in s.split():
        # checks if the lowercase version of the word in the string 
        # is not in the list 
        if ch.lower() not in word_list:
            # adds the lowercase version of the word to the list
            word_list.append(ch.lower())
        

# Function 4 
# This function calls other functions and excuetes them
def main():
    # executes the program 3 times
    for i in range(4): 
        print('Program Test {}'.format(i+1))
        print()
        # prints the prompt for testing function 1                           
        print('Testing Function #1:')
        
        # asks the user for a string
        myString = input('Type something with punctuation: ')
        # calls the function remove_punc by assigning it to variable newString
        newString = remove_punc(myString)
        
        # prints the string without punctuation
        print('Here is the string without punctuation: ', newString)
        # prints new line        
        print()    
        
        # prints prompt for testing function 2
        print('Testing Function #2:')
        
        # Prompts the user for a string
        myWord = str(input('Enter a word(s): '))
        # calls the function word count by assigning it to a variable
        num_Words = word_count(myWord)
        
        # prints the number of words in the string
        print('The number of words in this string is/are: ', num_Words) 
        # prints new line
        print()
        
        # prints the prompt for testing function 3
        print('Testing Function #3:')
        
        # prompts the user for a string to compare the list with
        string = input('Enter a word or string: ')
        # promots the user for words to put the list
        w = str(input('Enter words for the string: '))
        # creates an empty list
        my_List = []
        # iterates around the string w
        for i in w.split():
            # adds all the strings in w into the list my_List
            my_List.append(i)
        
        # calls the function add_unique 
        add_unique(string, my_List)
        # prints the new list
        print(my_List)
        print()
        
        
                                    # Main Program

# this checks if the main function is a standalone fuction or not
if __name__ == '__main__':
    # calls the main function
    main()